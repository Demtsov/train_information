#ifndef TRAINEDIT_H
#define TRAINEDIT_H

#include <QDialog>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>

namespace Ui {
class trainedit;
}

class trainedit : public QDialog
{
    Q_OBJECT

public:
    explicit trainedit(QWidget *parent = nullptr);
    ~trainedit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::trainedit *ui;
    QSqlDatabase database;
        QSqlQuery *qry;
 QSqlTableModel *model;
};

#endif // TRAINEDIT_H
