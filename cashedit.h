#ifndef CASHEDIT_H
#define CASHEDIT_H

#include <QDialog>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>
namespace Ui {
class cashedit;
}

class cashedit : public QDialog
{
    Q_OBJECT

public:
    explicit cashedit(QWidget *parent = nullptr);
    ~cashedit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cashedit *ui;
    QSqlDatabase database;
        QSqlQuery *qry;
 QSqlTableModel *model;
};

#endif // CASHEDIT_H
