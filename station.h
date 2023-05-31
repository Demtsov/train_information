#ifndef STATION_H
#define STATION_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>
#include <stationadd.h>
#include <stationedit.h>
#include <stationdelete.h>

namespace Ui {
class station;
}

class station : public QDialog
{
    Q_OBJECT

public:
    explicit station(QWidget *parent = nullptr);
    ~station();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();



    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::station *ui;
    QSqlDatabase database;
        QSqlQuery *qry;
 QSqlTableModel *model;
 QSqlTableModel *temp;
 stationadd *window;
 stationedit *window2;
 stationdelete *window3;
};

#endif // STATION_H
