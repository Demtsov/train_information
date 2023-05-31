/********************************************************************************
** Form generated from reading UI file 'station.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATION_H
#define UI_STATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_station
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *station)
    {
        if (station->objectName().isEmpty())
            station->setObjectName(QString::fromUtf8("station"));
        station->resize(521, 374);
        station->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        lineEdit = new QLineEdit(station);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 310, 161, 20));
        QFont font;
        font.setPointSize(10);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(station);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 60, 161, 23));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        tableView = new QTableView(station);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(180, 20, 331, 341));
        tableView->setFont(font);
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(8, 8, 8);"));
        pushButton_3 = new QPushButton(station);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 90, 161, 23));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(station);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 30, 161, 23));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(station);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 120, 161, 23));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        comboBox = new QComboBox(station);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 340, 161, 22));
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(station);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 200, 41, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(station);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 280, 121, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(station);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 240, 161, 16));
        QFont font1;
        font1.setPointSize(8);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(station);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 260, 161, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(station);

        QMetaObject::connectSlotsByName(station);
    } // setupUi

    void retranslateUi(QDialog *station)
    {
        station->setWindowTitle(QCoreApplication::translate("station", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202\321\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("station", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("station", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("station", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("station", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214/\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("station", "\320\232\320\276\320\264 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("station", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\321\202\320\260\320\275\321\206\320\270\320\270", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("station", "\320\232\320\276\320\264 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("station", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("station", "\320\222\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));

        label->setText(QCoreApplication::translate("station", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        label_4->setText(QCoreApplication::translate("station", " \321\200\320\265\320\260\320\273\320\270\320\267\320\276\320\262\320\260\320\275 \320\277\320\276\320\270\321\201\320\272", nullptr));
        label_2->setText(QCoreApplication::translate("station", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\270 \320\262\321\213\320\261\320\265\321\200\320\270\321\202\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("station", " \321\201\321\202\320\276\320\273\320\261\320\265\321\206 , \320\277\320\276 \320\272\320\276\321\202\320\276\321\200\320\276\320\274\321\203 \320\261\321\203\320\264\320\265\321\202 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class station: public Ui_station {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATION_H
