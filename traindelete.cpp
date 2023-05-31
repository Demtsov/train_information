#include "traindelete.h"
#include "ui_traindelete.h"
#include <QMessageBox>
#include <QDebug>
#include<QTableView>
#include <QSqlError>


traindelete::traindelete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::traindelete)
{
    ui->setupUi(this);
    database= QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/user/Documents/Train-Information_System/testDB.db");
}

traindelete::~traindelete()
{
    delete ui;
}

void traindelete::on_pushButton_clicked()
{
    QString id;

        id=ui->lineEdit->text();
        QSqlQuery qry;
        qry.prepare("DELETE FROM Train where Код_поезда=:id");
        qry.bindValue(":id", id);
        if(qry.exec()){
        QMessageBox::information(this,"База_данных","Удалено");
        } else{
        QMessageBox::critical(this,"База_данных",qry.lastError().text());
        }
}
