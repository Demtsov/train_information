#ifndef TRAIN_H
#define TRAIN_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <QSqlQueryModel>
#include <addtrain.h>
#include <trainedit.h>
#include <traindelete.h>


namespace Ui {
class train;
}

class train : public QDialog
{
    Q_OBJECT

public:
    explicit train(QWidget *parent = nullptr);
    ~train();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();



    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::train *ui;
    QSqlDatabase database;
        QSqlQuery *qry;
 QSqlTableModel *model;
 QSqlTableModel *temp;
 QSqlQueryModel *model1;
 addtrain *window1;
 trainedit *window2;
 traindelete *window3;


};

#endif // TRAIN_H
