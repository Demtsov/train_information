/********************************************************************************
** Form generated from reading UI file 'cashedit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHEDIT_H
#define UI_CASHEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cashedit
{
public:
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QLabel *label_3;

    void setupUi(QDialog *cashedit)
    {
        if (cashedit->objectName().isEmpty())
            cashedit->setObjectName(QString::fromUtf8("cashedit"));
        cashedit->resize(400, 172);
        cashedit->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34,34);"));
        pushButton = new QPushButton(cashedit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 140, 381, 23));
        QFont font;
        font.setPointSize(10);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(cashedit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 0, 261, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(cashedit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 110, 111, 16));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_3 = new QLineEdit(cashedit);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 80, 121, 20));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(cashedit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 81, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(cashedit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 111, 16));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(cashedit);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 50, 131, 20));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_4 = new QLineEdit(cashedit);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 110, 111, 20));
        lineEdit_4->setFont(font);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(cashedit);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 20, 111, 20));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: rgb(60, 60,60);"));
        label_3 = new QLabel(cashedit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 101, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(cashedit);

        QMetaObject::connectSlotsByName(cashedit);
    } // setupUi

    void retranslateUi(QDialog *cashedit)
    {
        cashedit->setWindowTitle(QCoreApplication::translate("cashedit", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("cashedit", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("cashedit", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\262\321\213\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \321\201\321\202\321\200\320\276\320\272\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("cashedit", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        lineEdit_3->setText(QString());
        label_2->setText(QCoreApplication::translate("cashedit", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 WIFI", nullptr));
        label->setText(QCoreApplication::translate("cashedit", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\321\202\320\260\320\275\321\206\320\270\320\270", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_4->setText(QString());
        lineEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("cashedit", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \320\261\321\203\321\204\320\265\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cashedit: public Ui_cashedit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHEDIT_H
