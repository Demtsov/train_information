#include "train.h"
#include "ui_train.h"
#include <QMessageBox>
#include <QDebug>
#include<QTableView>
#include <QSqlError>

train::train(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::train)
{
    ui->setupUi(this);
    window1=new addtrain;
    window2=new trainedit;
    window3=new traindelete;
    database= QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/user/Documents/Train-Information_System/testDB.db");

    if(database.open())
    {
        QMessageBox::information(this,"Database","База данных  открыта");

     }
    else {
        QMessageBox::warning(this,"Database","Ошибка, база данных не открыта");}
}

train::~train()
{
    delete ui;
}

void train::on_pushButton_4_clicked()
{  QString id;
    QSqlQuery qry;
 qry.prepare("select * from Train");
 model = new QSqlTableModel(this,database);
 temp = new QSqlTableModel(this,database);
 model->setTable("Train");
 model->select();
 ui->tableView->setModel(model);

}

void train::on_pushButton_clicked()
{window1->show();

}

void train::on_pushButton_2_clicked()
{ window2->show();

}

void train::on_pushButton_3_clicked()
{ window3->show();

}



void train::on_comboBox_currentIndexChanged(int index)
{
    if (index == 0) {  QString txt = ui->lineEdit->text();
        qDebug()<< txt;
        model->setFilter(QString("Код_поезда = '%1'").arg(txt));
        model->select();
    ui->tableView->setModel(model);

        } else if (index == 1) {
        QString txt = ui->lineEdit->text();
                qDebug()<< txt;
                model->setFilter(QString("Тип_поезда = '%1'").arg(txt));
                model->select();
            ui->tableView->setModel(model);

        }
    else if (index == 2) {  QString txt = ui->lineEdit->text();
        qDebug()<< txt;
        model->setFilter(QString("Количество_вагонов = '%1'").arg(txt));
        model->select();
    ui->tableView->setModel(model);

            }
    else if (index == 3) {QString txt = ui->lineEdit->text();
        qDebug()<< txt;
        model->setFilter(QString("Цена_билета = '%1'").arg(txt));
        model->select();
        ui->tableView->setModel(model);}
}
