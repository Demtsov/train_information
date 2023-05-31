#ifndef CASHDELETE_H
#define CASHDELETE_H

#include <QDialog>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>

namespace Ui {
class cashdelete;
}

class cashdelete : public QDialog
{
    Q_OBJECT

public:
    explicit cashdelete(QWidget *parent = nullptr);
    ~cashdelete();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cashdelete *ui;
    QSqlDatabase database;
        QSqlQuery *qry;
 QSqlTableModel *model;
};

#endif // CASHDELETE_H
