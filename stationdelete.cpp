#include "stationdelete.h"
#include "ui_stationdelete.h"
#include<QTableView>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

stationdelete::stationdelete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stationdelete)
{
    ui->setupUi(this);
}

stationdelete::~stationdelete()
{
    delete ui;
}

void stationdelete::on_pushButton_clicked()
{
    QString id;

        id=ui->lineEdit->text();
        QSqlQuery qry;
        qry.prepare("DELETE FROM Stop where Код_остановки=:id");
        qry.bindValue(":id", id);
        if(qry.exec()){
        QMessageBox::information(this,"База_данных","Удалено");
        } else{
        QMessageBox::critical(this,"База_данных",qry.lastError().text());
        }
}
