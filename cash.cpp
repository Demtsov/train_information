#include "cash.h"
#include "ui_cash.h"

cash::cash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cash)
{
    ui->setupUi(this);
    window= new cashadd;
    window2= new cashedit;
    window3= new cashdelete;

}

cash::~cash()
{
    delete ui;
}

void cash::on_pushButton_clicked()
{ window->open();

}

void cash::on_pushButton_2_clicked()
{ window2->open();

}

void cash::on_pushButton_3_clicked()
{ window3->open();

}

void cash::on_pushButton_4_clicked()
{ QString id;
    QSqlQuery qry;
 qry.prepare("select * from Station");
 model = new QSqlTableModel(this,database);
 model->setTable("Station");
 model->select();
 model->setEditStrategy(QSqlTableModel::OnManualSubmit);
 ui->tableView->setModel(model);


}




void cash::on_comboBox_currentIndexChanged(int index)
{
    if (index == 0) {  QString txt = ui->lineEdit->text();
        qDebug()<< txt;
        model->setFilter(QString("Название_станции = '%1'").arg(txt));
        model->select();
    ui->tableView->setModel(model);

        } else if (index == 1) {
        QString txt = ui->lineEdit->text();
                qDebug()<< txt;
                model->setFilter(QString("Наличие_WiFi = '%1'").arg(txt));
                model->select();
            ui->tableView->setModel(model);

        }
    else if (index == 2) {  QString txt = ui->lineEdit->text();
        qDebug()<< txt;
        model->setFilter(QString("Наличие_буфета = '%1'").arg(txt));
        model->select();
    ui->tableView->setModel(model);

            }
    else if (index == 3) {QString txt = ui->lineEdit->text();
        qDebug()<< txt;
        model->setFilter(QString("Номер_телефона = '%1'").arg(txt));
        model->select();
        ui->tableView->setModel(model);}


}
