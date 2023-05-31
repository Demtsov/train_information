/********************************************************************************
** Form generated from reading UI file 'addtrain.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTRAIN_H
#define UI_ADDTRAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addtrain
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;

    void setupUi(QDialog *addtrain)
    {
        if (addtrain->objectName().isEmpty())
            addtrain->setObjectName(QString::fromUtf8("addtrain"));
        addtrain->resize(400, 183);
        addtrain->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        pushButton = new QPushButton(addtrain);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 150, 381, 23));
        QFont font;
        font.setPointSize(10);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(60, 60, 60);"));
        lineEdit = new QLineEdit(addtrain);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 30, 151, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(addtrain);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 60, 151, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_3 = new QLineEdit(addtrain);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 90, 101, 20));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(addtrain);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 71, 16));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(addtrain);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 71, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(addtrain);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 121, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_4 = new QLineEdit(addtrain);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(90, 120, 141, 20));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(addtrain);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 120, 81, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(addtrain);

        QMetaObject::connectSlotsByName(addtrain);
    } // setupUi

    void retranslateUi(QDialog *addtrain)
    {
        addtrain->setWindowTitle(QCoreApplication::translate("addtrain", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("addtrain", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("addtrain", "\320\232\320\276\320\264 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("addtrain", "\320\242\320\270\320\277 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("addtrain", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\320\260\320\263\320\276\320\275\320\276\320\262", nullptr));
        label_4->setText(QCoreApplication::translate("addtrain", "\320\246\320\265\320\275\320\260 \320\261\320\270\320\273\320\265\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addtrain: public Ui_addtrain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTRAIN_H
