/********************************************************************************
** Form generated from reading UI file 'trainsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINSEARCH_H
#define UI_TRAINSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_trainsearch
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QDialog *trainsearch)
    {
        if (trainsearch->objectName().isEmpty())
            trainsearch->setObjectName(QString::fromUtf8("trainsearch"));
        trainsearch->resize(460, 300);
        trainsearch->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(trainsearch);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 270, 111, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 48, 48);"));
        lineEdit = new QLineEdit(trainsearch);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 121, 20));
        label = new QLabel(trainsearch);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 111, 16));
        tableView = new QTableView(trainsearch);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(140, 10, 311, 281));

        retranslateUi(trainsearch);

        QMetaObject::connectSlotsByName(trainsearch);
    } // setupUi

    void retranslateUi(QDialog *trainsearch)
    {
        trainsearch->setWindowTitle(QCoreApplication::translate("trainsearch", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("trainsearch", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        label->setText(QCoreApplication::translate("trainsearch", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\264 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class trainsearch: public Ui_trainsearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINSEARCH_H
