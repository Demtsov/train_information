#ifndef CASH_H
#define CASH_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>
#include <cashadd.h>
#include <cashedit.h>
#include <cashdelete.h>

namespace Ui {
class cash;
}

class cash : public QDialog
{
    Q_OBJECT

public:
    explicit cash(QWidget *parent = nullptr);
    ~cash();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::cash *ui;
    QSqlQuery *qry;
QSqlTableModel *model;
QSqlQueryModel *model1;
  QSqlDatabase database;
  cashadd *window;
  cashedit *window2;
  cashdelete *window3;
};

#endif // CASH_H
