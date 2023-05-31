#ifndef CASHADD_H
#define CASHADD_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>
namespace Ui {
class cashadd;
}

class cashadd : public QDialog
{
    Q_OBJECT

public:
    explicit cashadd(QWidget *parent = nullptr);
    ~cashadd();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cashadd *ui;
    QSqlQuery *qry;
QSqlTableModel *model;
QSqlQueryModel *model1;
  QSqlDatabase database;
};

#endif // CASHADD_H
