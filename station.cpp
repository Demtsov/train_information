#include "station.h"
#include "ui_station.h"
#include <QMessageBox>
#include <QDebug>
#include<QTableView>
#include <QSqlError>

station::station(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::station)
{
    ui->setupUi(this);
    window= new stationadd;
    window2= new stationedit;
    window3= new stationdelete;

}

station::~station()
{
    delete ui;
}

void station::on_pushButton_clicked()
{ window->show();

}

void station::on_pushButton_2_clicked()
{ window2->show();

}

void station::on_pushButton_3_clicked()
{ window3->show();

}

void station::on_pushButton_4_clicked()
{
    QSqlQuery qry;
 qry.prepare("select * from Stop");
 model = new QSqlTableModel(this,database);
 model->setTable("Stop");
 model->select();
 ui->tableView->setModel(model);

}



void station::on_comboBox_currentIndexChanged(int index)
{ if (index == 0) {  QString txt = ui->lineEdit->text();
        qDebug()<< txt;
        model->setFilter(QString("Код_остановки = '%1'").arg(txt));
        model->select();
    ui->tableView->setModel(model);

        } else if (index == 1) {
        QString txt = ui->lineEdit->text();
                qDebug()<< txt;
                model->setFilter(QString("Название_станции = '%1'").arg(txt));
                model->select();
            ui->tableView->setModel(model);

        }
    else if (index == 2) {  QString txt = ui->lineEdit->text();
        qDebug()<< txt;
        model->setFilter(QString("Код_поезда = '%1'").arg(txt));
        model->select();
    ui->tableView->setModel(model);

            }
    else if (index == 3) {QString txt = ui->lineEdit->text();
        qDebug()<< txt;
        model->setFilter(QString("Время_прибытия = '%1'").arg(txt));
        model->select();
        ui->tableView->setModel(model);}

    else if (index == 4) {QString txt = ui->lineEdit->text();
        qDebug()<< txt;
        model->setFilter(QString("Время_отправления = '%1'").arg(txt));
        model->select();
        ui->tableView->setModel(model);}

}
