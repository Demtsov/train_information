#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include<QTableView>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    window1= new train;
    window2= new cash;
    window3= new station;

    database= QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/user/Documents/Train-Information_System/testDB.db");
    database.open();
}





MainWindow::~MainWindow()
{
    delete ui;
}




//void MainWindow::on_pushButton_clicked()
//{
//    window3->show();

//}

//void MainWindow::on_pushButton_2_clicked()
//{ window1->show();

//}

//void MainWindow::on_pushButton_3_clicked()
//{ window2->show();

//}



void MainWindow::on_comboBox_currentIndexChanged(int index)
{ if (index == 0) {

        } else if (index == 1) {
        window3->show();

        }
    else if (index == 2) {
window1->show();
            }
    else if (index == 3) {

       window2->show();     }

}



void MainWindow::on_pushButton_clicked()
{ QSqlQuery qry;
    QSqlQueryModel *model1 = new QSqlQueryModel;
    QString txt = ui->lineEdit->text();
    qDebug()<< txt;
model1->setQuery("SELECT Stop.Код_поезда,Stop.Название_станции,Stop.Время_прибытия, Stop.Время_отправления ,Train.Цена_билета FROM Stop LEFT OUTER JOIN Train ON Stop.Код_поезда = Train.Код_поезда WHERE (Stop.Код_поезда=\'"+txt+"\')");
ui->tableView->setModel(model1);
ui->tableView->show();

}

void MainWindow::on_pushButton_2_clicked()
{   QSqlQueryModel *model1 = new QSqlQueryModel;
    model1->setQuery("SELECT Stop.Код_поезда,Stop.Название_станции,Stop.Время_прибытия, Stop.Время_отправления ,Train.Цена_билета FROM Stop LEFT OUTER JOIN Train ON Stop.Код_поезда = Train.Код_поезда");
    ui->tableView->setModel(model1);
    ui->tableView->show();

}

void MainWindow::on_pushButton_3_clicked()
{

}

void MainWindow::on_pushButton_4_clicked()
{    QSqlQuery query;
     QString txt = ui->lineEdit->text();
     query.exec("SELECT Train.Цена_билета FROM Train WHERE (Train.Код_поезда=\'"+txt+"\')");
      query.bindValue(":txt", txt);
      while (query.next()) {
             int name = query.value(0).toInt();

              int txt1 = ui->lineEdit_2->text().toInt(/*0,10*/);
             int txt2 = ui->lineEdit_3->text().toInt(/*0,10*/);
            int txt3=txt2-txt1;
            int txt4=name*txt3;
            QString s = QString::number(txt4);
             qDebug() << name ;
             QMessageBox::information(this, tr("Цена Билета"), s);
         }

}
