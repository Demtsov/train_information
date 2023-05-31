/********************************************************************************
** Form generated from reading UI file 'stationadd.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIONADD_H
#define UI_STATIONADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_stationadd
{
public:
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QDateTimeEdit *dateTimeEdit;
    QDateTimeEdit *dateTimeEdit_2;

    void setupUi(QDialog *stationadd)
    {
        if (stationadd->objectName().isEmpty())
            stationadd->setObjectName(QString::fromUtf8("stationadd"));
        stationadd->resize(400, 205);
        stationadd->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        label_2 = new QLabel(stationadd);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 111, 16));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(stationadd);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 101, 16));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(stationadd);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 10, 131, 20));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(stationadd);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 170, 381, 23));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(stationadd);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 71, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(stationadd);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 100, 111, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(stationadd);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 130, 121, 16));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        comboBox = new QComboBox(stationadd);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 40, 111, 22));
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        comboBox_2 = new QComboBox(stationadd);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(80, 70, 151, 22));
        comboBox_2->setFont(font);
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        dateTimeEdit = new QDateTimeEdit(stationadd);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(110, 100, 121, 22));
        dateTimeEdit->setFont(font);
        dateTimeEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        dateTimeEdit_2 = new QDateTimeEdit(stationadd);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(130, 130, 101, 22));
        dateTimeEdit_2->setFont(font);
        dateTimeEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(stationadd);

        QMetaObject::connectSlotsByName(stationadd);
    } // setupUi

    void retranslateUi(QDialog *stationadd)
    {
        stationadd->setWindowTitle(QCoreApplication::translate("stationadd", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("stationadd", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\321\202\320\260\320\275\321\206\320\270\320\270", nullptr));
        label->setText(QCoreApplication::translate("stationadd", "\320\232\320\276\320\264 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        lineEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("stationadd", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("stationadd", "\320\232\320\276\320\264 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("stationadd", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("stationadd", "\320\222\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stationadd: public Ui_stationadd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIONADD_H
