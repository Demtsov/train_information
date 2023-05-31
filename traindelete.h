#ifndef TRAINDELETE_H
#define TRAINDELETE_H

#include <QDialog>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>

namespace Ui {
class traindelete;
}

class traindelete : public QDialog
{
    Q_OBJECT

public:
    explicit traindelete(QWidget *parent = nullptr);
    ~traindelete();

private slots:
    void on_pushButton_clicked();

private:
    Ui::traindelete *ui;
    QSqlDatabase database;
        QSqlQuery *qry;
 QSqlTableModel *model;
};

#endif // TRAINDELETE_H
