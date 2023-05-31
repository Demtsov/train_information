/********************************************************************************
** Form generated from reading UI file 'stationedit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIONEDIT_H
#define UI_STATIONEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_stationedit
{
public:
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QDateTimeEdit *dateTimeEdit;
    QDateTimeEdit *dateTimeEdit_2;

    void setupUi(QDialog *stationedit)
    {
        if (stationedit->objectName().isEmpty())
            stationedit->setObjectName(QString::fromUtf8("stationedit"));
        stationedit->resize(400, 215);
        stationedit->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 34, 34);"));
        pushButton = new QPushButton(stationedit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 180, 381, 23));
        QFont font;
        font.setPointSize(10);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(stationedit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 10, 261, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(stationedit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 111, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(stationedit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 120, 111, 16));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label = new QLabel(stationedit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 101, 16));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(stationedit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 191, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(stationedit);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 30, 131, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        label_6 = new QLabel(stationedit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 150, 121, 16));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        comboBox = new QComboBox(stationedit);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 60, 111, 22));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        comboBox_2 = new QComboBox(stationedit);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(80, 90, 151, 22));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        dateTimeEdit = new QDateTimeEdit(stationedit);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(110, 120, 121, 22));
        dateTimeEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));
        dateTimeEdit_2 = new QDateTimeEdit(stationedit);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(130, 150, 101, 22));
        dateTimeEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60,60);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(stationedit);

        QMetaObject::connectSlotsByName(stationedit);
    } // setupUi

    void retranslateUi(QDialog *stationedit)
    {
        stationedit->setWindowTitle(QCoreApplication::translate("stationedit", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("stationedit", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("stationedit", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\262\321\213\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \321\201\321\202\321\200\320\276\320\272\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("stationedit", "\320\232\320\276\320\264 \320\277\320\276\320\265\320\267\320\264\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("stationedit", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("stationedit", "\320\232\320\276\320\264 \320\276\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("stationedit", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\321\202\320\260\320\275\321\206\320\270\320\270", nullptr));
        lineEdit->setText(QString());
        label_6->setText(QCoreApplication::translate("stationedit", "\320\222\321\200\320\265\320\274\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stationedit: public Ui_stationedit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIONEDIT_H
