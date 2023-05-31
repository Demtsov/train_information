#include "trainsearch.h"
#include "ui_trainsearch.h"
#include <QMessageBox>
#include <QDebug>
#include<QTableView>
#include <QSqlError>
#include <QString>
#include <QLineEdit>

trainsearch::trainsearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::trainsearch)
{
    ui->setupUi(this);
}

trainsearch::~trainsearch()
{
    delete ui;
}

void trainsearch::on_pushButton_clicked()
{ QString txt = ui->lineEdit->text();
    qDebug()<< txt;
    model->setFilter(QString("Код_поезда = '%1'").arg(txt));
    model->select();
ui->tableView->setModel(model);


}
