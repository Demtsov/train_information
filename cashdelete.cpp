#include "cashdelete.h"
#include "ui_cashdelete.h"
#include <QMessageBox>
#include <QDebug>
#include<QTableView>
#include <QSqlError>

cashdelete::cashdelete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cashdelete)
{
    ui->setupUi(this);
    database= QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/user/Documents/Train-Information_System/testDB.db");
}

cashdelete::~cashdelete()
{
    delete ui;
}

void cashdelete::on_pushButton_clicked()
{
    QString name;

        name=ui->lineEdit->text();
        QSqlQuery qry;
        qry.prepare("DELETE FROM Station where Название_станции=:name");
        qry.bindValue(":name", name);
        if(qry.exec()){
        QMessageBox::information(this,"База_данных","Удалено");
        } else{
        QMessageBox::critical(this,"База_данных",qry.lastError().text());}
}
