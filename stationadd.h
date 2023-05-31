#ifndef STATIONADD_H
#define STATIONADD_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>

namespace Ui {
class stationadd;
}

class stationadd : public QDialog
{
    Q_OBJECT

public:
    explicit stationadd(QWidget *parent = nullptr);
    ~stationadd();

private slots:
    void on_pushButton_clicked();
    void combo();
    void combo2();

private:
    Ui::stationadd *ui;
    QSqlQuery *qry;
QSqlTableModel *model;
QSqlQueryModel *model1;
  QSqlDatabase database;
};

#endif // STATIONADD_H
