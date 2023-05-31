#ifndef TRAINSEARCH_H
#define TRAINSEARCH_H

#include <QDialog>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QLabel>
namespace Ui {
class trainsearch;
}

class trainsearch : public QDialog
{
    Q_OBJECT

public:
    explicit trainsearch(QWidget *parent = nullptr);
    ~trainsearch();

private slots:
    void on_pushButton_clicked();

private:
    Ui::trainsearch *ui;
    QSqlDatabase database;
        QSqlQuery *qry;
 QSqlTableModel *model;
  QSqlTableModel *temp;
 QLabel *searchlabel;
};

#endif // TRAINSEARCH_H
