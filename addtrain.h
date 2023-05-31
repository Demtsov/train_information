#ifndef ADDTRAIN_H
#define ADDTRAIN_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>

namespace Ui {
class addtrain;
}

class addtrain : public QDialog
{
    Q_OBJECT

public:
    explicit addtrain(QWidget *parent = nullptr);
    ~addtrain();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addtrain *ui;
    QSqlDatabase database;
        QSqlQuery *qry;
 QSqlTableModel *model;
 QSqlQueryModel *model1;
};

#endif // ADDTRAIN_H
