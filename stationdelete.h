#ifndef STATIONDELETE_H
#define STATIONDELETE_H

#include <QDialog>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>

namespace Ui {
class stationdelete;
}

class stationdelete : public QDialog
{
    Q_OBJECT

public:
    explicit stationdelete(QWidget *parent = nullptr);
    ~stationdelete();

private slots:
    void on_pushButton_clicked();

private:
    Ui::stationdelete *ui;
    QSqlDatabase database;
        QSqlQuery *qry;
 QSqlTableModel *model;
};

#endif // STATIONDELETE_H
