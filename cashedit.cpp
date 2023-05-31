#include "cashedit.h"
#include "ui_cashedit.h"
#include <QMessageBox>
#include <QDebug>
#include<QTableView>
#include <QSqlError>

cashedit::cashedit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cashedit)
{
    ui->setupUi(this);
    database= QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/user/Documents/Train-Information_System/testDB.db");
}

cashedit::~cashedit()
{
    delete ui;
}

void cashedit::on_pushButton_clicked()
{ QString name,wifi,buffet,number;
    name=ui->lineEdit->text();
    wifi=ui->lineEdit_2->text();
    buffet=ui->lineEdit_3->text();
    number=ui->lineEdit_4->text();
    QSqlQuery qry;
   qry.prepare("UPDATE  Station set Название_станции=:name, Наличие_WiFi=:wifi, Наличие_буфета=buffet, Номер_телефона=:number WHERE Название_станции=:station_id" );
    qry.bindValue(":name", name);
  qry.bindValue(":wifi", wifi);
  qry.bindValue(":buffet", buffet);
  qry.bindValue(":number", number);
 if(qry.exec()){
 QMessageBox::information(this,"База_данных","Сохранено");
 } else{
 QMessageBox::critical(this,"База_данных",qry.lastError().text());}

}
