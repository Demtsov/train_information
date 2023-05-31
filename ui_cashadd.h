/********************************************************************************
** Form generated from reading UI file 'cashadd.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHADD_H
#define UI_CASHADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cashadd
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;

    void setupUi(QDialog *cashadd)
    {
        if (cashadd->objectName().isEmpty())
            cashadd->setObjectName(QString::fromUtf8("cashadd"));
        cashadd->resize(400, 180);
        cashadd->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        lineEdit = new QLineEdit(cashadd);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 10, 111, 20));
        QFont font;
        font.setPointSize(10);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(cashadd);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 40, 131, 20));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(cashadd);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 81, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(cashadd);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 111, 16));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_3 = new QLineEdit(cashadd);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 70, 121, 20));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(cashadd);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 150, 381, 23));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(cashadd);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 101, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_4 = new QLineEdit(cashadd);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(110, 100, 121, 20));
        lineEdit_4->setFont(font);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(cashadd);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 100, 101, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(cashadd);

        QMetaObject::connectSlotsByName(cashadd);
    } // setupUi

    void retranslateUi(QDialog *cashadd)
    {
        cashadd->setWindowTitle(QCoreApplication::translate("cashadd", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        label_2->setText(QCoreApplication::translate("cashadd", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 WIFI", nullptr));
        label->setText(QCoreApplication::translate("cashadd", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\321\202\320\260\320\275\321\206\320\270\320\270", nullptr));
        lineEdit_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("cashadd", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("cashadd", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \320\261\321\203\321\204\320\265\321\202\320\260", nullptr));
        lineEdit_4->setText(QString());
        label_4->setText(QCoreApplication::translate("cashadd", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cashadd: public Ui_cashadd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHADD_H
