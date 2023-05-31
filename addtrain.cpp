#include "addtrain.h"
#include "ui_addtrain.h"
#include <QMessageBox>
#include <QDebug>
#include<QTableView>
#include <QSqlError>

addtrain::addtrain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addtrain)
{
    ui->setupUi(this);
    database= QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/user/Documents/Train-Information_System/testDB.db");

}

addtrain::~addtrain()
{
    delete ui;
}

void addtrain::on_pushButton_clicked()
{
    QString id,type,count,cash;
    id=ui->lineEdit->text();
    type=ui->lineEdit_2->text();
    count=ui->lineEdit_3->text();
    cash=ui->lineEdit_4->text();
    QSqlQuery qry;
    qry.prepare("INSERT INTO Train (Код_поезда,Тип_поезда,Количество_вагонов, Цена_билета) VALUES (:id, :type, :count, :cash)");
    qry.bindValue(":id", id);
  qry.bindValue(":type", type);
  qry.bindValue(":count", count);
  qry.bindValue(":cash", cash);
 if(qry.exec()){
 QMessageBox::information(this,"База_данных","Сохранено");
 } else{
 QMessageBox::critical(this,"База_данных",qry.lastError().text());}
}
