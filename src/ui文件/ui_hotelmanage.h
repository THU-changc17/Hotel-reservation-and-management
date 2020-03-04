/********************************************************************************
** Form generated from reading UI file 'hotelmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELMANAGE_H
#define UI_HOTELMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_hotelmanage
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *roomsearchBtn;
    QPushButton *ordersearchBtn;
    QPushButton *modifyBtn;
    QTableWidget *tableWidget;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *hotelmanage)
    {
        if (hotelmanage->objectName().isEmpty())
            hotelmanage->setObjectName(QStringLiteral("hotelmanage"));
        hotelmanage->resize(675, 411);
        label = new QLabel(hotelmanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 201, 20));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        lineEdit = new QLineEdit(hotelmanage);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 50, 171, 21));
        roomsearchBtn = new QPushButton(hotelmanage);
        roomsearchBtn->setObjectName(QStringLiteral("roomsearchBtn"));
        roomsearchBtn->setGeometry(QRect(60, 160, 141, 28));
        roomsearchBtn->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        ordersearchBtn = new QPushButton(hotelmanage);
        ordersearchBtn->setObjectName(QStringLiteral("ordersearchBtn"));
        ordersearchBtn->setGeometry(QRect(60, 240, 141, 28));
        ordersearchBtn->setStyleSheet(QString::fromUtf8("font: 9pt \"\344\273\277\345\256\213\";\n"
"font: 12pt \"\344\273\277\345\256\213\";"));
        modifyBtn = new QPushButton(hotelmanage);
        modifyBtn->setObjectName(QStringLiteral("modifyBtn"));
        modifyBtn->setGeometry(QRect(60, 320, 141, 28));
        modifyBtn->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"\344\273\277\345\256\213\";\n"
""));
        tableWidget = new QTableWidget(hotelmanage);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(280, 30, 361, 331));
        lineEdit_2 = new QLineEdit(hotelmanage);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 80, 171, 21));

        retranslateUi(hotelmanage);

        QMetaObject::connectSlotsByName(hotelmanage);
    } // setupUi

    void retranslateUi(QDialog *hotelmanage)
    {
        hotelmanage->setWindowTitle(QApplication::translate("hotelmanage", "Dialog", nullptr));
        label->setText(QApplication::translate("hotelmanage", "<html><head/><body><p><span style=\" font-weight:600;\">\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\351\205\222\345\272\227\345\220\215\347\247\260\357\274\232</span></p></body></html>", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("hotelmanage", "\350\257\267\350\276\223\345\205\245\351\205\222\345\272\227\345\220\215\347\247\260", nullptr));
        roomsearchBtn->setText(QApplication::translate("hotelmanage", "\346\237\245\347\234\213\345\256\242\346\210\277", nullptr));
        ordersearchBtn->setText(QApplication::translate("hotelmanage", "\346\237\245\347\234\213\350\256\242\345\215\225", nullptr));
        modifyBtn->setText(QApplication::translate("hotelmanage", "\344\277\256\346\224\271\345\256\242\346\210\277", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("hotelmanage", "\350\257\267\350\276\223\345\205\245\351\205\222\345\272\227\345\257\206\351\222\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hotelmanage: public Ui_hotelmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELMANAGE_H
