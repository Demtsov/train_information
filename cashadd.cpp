#include "cashadd.h"
#include "ui_cashadd.h"
#include <QMessageBox>
#include <QDebug>
#include<QTableView>
#include <QSqlError>

cashadd::cashadd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cashadd)
{
    ui->setupUi(this);
    database= QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/user/Documents/Train-Information_System/testDB.db");
}

cashadd::~cashadd()
{
    delete ui;
}

void cashadd::on_pushButton_clicked()
{ QString name,wifi,buffet,number;
    name=ui->lineEdit->text();
    wifi=ui->lineEdit_2->text();
    buffet=ui->lineEdit_3->text();
    number=ui->lineEdit_4->text();
    QSqlQuery qry;
    qry.prepare("INSERT INTO Station (Название_станции, Наличие_WiFi, Наличие_буфета, Номер_телефона) VALUES (:name, :wifi, :buffet, :number)");
    qry.bindValue(":name", name);
  qry.bindValue(":wifi", wifi);
  qry.bindValue(":buffet", buffet);
  qry.bindValue(":number", number);
 if(qry.exec()){
 QMessageBox::information(this,"База_данных","Сохранено");
 } else{
 QMessageBox::critical(this,"База_данных",qry.lastError().text());}

}
