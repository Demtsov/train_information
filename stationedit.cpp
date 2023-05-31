#include "stationedit.h"
#include "ui_stationedit.h"
#include <QMessageBox>
#include <QDebug>
#include<QTableView>
#include <QSqlError>
#include <QComboBox>

stationedit::stationedit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stationedit)
{
    ui->setupUi(this);
    database= QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/user/Documents/Train-Information_System/testDB.db");
    database.open();
    this->combo();
    this->combo2();
}

stationedit::~stationedit()
{
    delete ui;
}

void stationedit::on_pushButton_clicked()
{  QString station_id,name,id,stop_time,start_time;
    station_id=ui->lineEdit->text();
    name=ui->comboBox->currentText();
    id=ui->comboBox_2->currentText();
    stop_time=ui->dateTimeEdit->text();
    start_time=ui->dateTimeEdit_2->text();
    QSqlQuery qry;
    qry.prepare("UPDATE  Stop set Код_остановки=:station_id, Название_станции=:name, Код_поезда=:id, Время_прибытия=:stop_time, Время_отправления=:start_time WHERE Код_остановки=:station_id" );
    qry.bindValue(":station_id", station_id);
  qry.bindValue(":name", name);
  qry.bindValue(":id", id);
  qry.bindValue(":stop_time", stop_time);
  qry.bindValue(":start_time", start_time);
 if(qry.exec()){
 QMessageBox::information(this,"База_данных","Изменено");
 } else{
 QMessageBox::critical(this,"База_данных",qry.lastError().text());}

}

void stationedit::combo()
{
QSqlQuery query;
if (!query.exec("SELECT COUNT(*) FROM Station"))
{
qDebug() << "Вызов не работает";
qDebug() << query.lastError().text();
qDebug() << query.lastQuery();
}

query.next();
QSqlQuery queryGetCompany;
if (!queryGetCompany.exec("SELECT Название_станции FROM Station"))
{
qDebug() << "Вызов не работает";
qDebug() << queryGetCompany.lastError().text();
qDebug() << queryGetCompany.lastQuery();
}
for(int i = 0; i < query.value(0).toInt(); i++)
{
queryGetCompany.next();
ui->comboBox->addItem(queryGetCompany.value(0).toString());
}

}

void stationedit::combo2()
{
QSqlQuery query;
if (!query.exec("SELECT COUNT(*) FROM Train"))
{
qDebug() << "Вызов не работает";
qDebug() << query.lastError().text();
qDebug() << query.lastQuery();
}

query.next();
QSqlQuery queryGetCompany;
if (!queryGetCompany.exec("SELECT Код_поезда FROM Train"))
{
qDebug() << "Вызов не работает";
qDebug() << queryGetCompany.lastError().text();
qDebug() << queryGetCompany.lastQuery();
}
for(int i = 0; i < query.value(0).toInt(); i++)
{
queryGetCompany.next();
ui->comboBox_2->addItem(queryGetCompany.value(0).toString());
}

}
