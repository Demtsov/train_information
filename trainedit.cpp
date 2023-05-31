#include "trainedit.h"
#include "ui_trainedit.h"
#include <QMessageBox>
#include <QDebug>
#include<QTableView>
#include <QSqlError>

trainedit::trainedit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::trainedit)
{
    ui->setupUi(this);
    database= QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/user/Documents/Train-Information_System/testDB.db");
}

trainedit::~trainedit()
{
    delete ui;
}

void trainedit::on_pushButton_clicked()
{
    QString id,type,count,cash;
    id=ui->lineEdit->text();
    type=ui->lineEdit_2->text();
    count=ui->lineEdit_3->text();
    cash=ui->lineEdit_4->text();
    QSqlQuery qry;
       qry.prepare("UPDATE  Train set Код_поезда=:id, Тип_поезда=:type, Количество_вагонов=:count, Цена_билета=:cash WHERE Код_поезда=:id" );
       qry.bindValue(":id", id);
     qry.bindValue(":type", type);
     qry.bindValue(":count", count);
 qry.bindValue(":cash", cash);
    if(qry.exec()){
    QMessageBox::information(this,"База_данных","Изменено");
    } else{
    QMessageBox::critical(this,"База_данных",qry.lastError().text());
    }

}
