#ifndef STATIONEDIT_H
#define STATIONEDIT_H

#include <QDialog>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>

namespace Ui {
class stationedit;
}

class stationedit : public QDialog
{
    Q_OBJECT

public:
    explicit stationedit(QWidget *parent = nullptr);
    ~stationedit();

private slots:
    void on_pushButton_clicked();
    void combo();
    void combo2();

private:
    Ui::stationedit *ui;
    QSqlDatabase database;
        QSqlQuery *qry;
 QSqlTableModel *model;
};

#endif // STATIONEDIT_H
