/********************************************************************************
** Form generated from reading UI file 'stationdelete.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIONDELETE_H
#define UI_STATIONDELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_stationdelete
{
public:
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *stationdelete)
    {
        if (stationdelete->objectName().isEmpty())
            stationdelete->setObjectName(QString::fromUtf8("stationdelete"));
        stationdelete->resize(400, 97);
        stationdelete->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        label_2 = new QLabel(stationdelete);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 91, 16));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(stationdelete);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 0, 231, 16));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(stationdelete);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 30, 111, 20));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(stationdelete);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 60, 381, 23));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(stationdelete);

        QMetaObject::connectSlotsByName(stationdelete);
    } // setupUi

    void retranslateUi(QDialog *stationdelete)
    {
        stationdelete->setWindowTitle(QCoreApplication::translate("stationdelete", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("stationdelete", "\320\232\320\276\320\264 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("stationdelete", "\320\224\320\273\321\217 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\264 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("stationdelete", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stationdelete: public Ui_stationdelete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIONDELETE_H
