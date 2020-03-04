/********************************************************************************
** Form generated from reading UI file 'orderlist.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERLIST_H
#define UI_ORDERLIST_H

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

class Ui_orderlist
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *remoneyBtn;
    QPushButton *inBtn;
    QPushButton *leaveBtn;
    QLabel *label_2;

    void setupUi(QDialog *orderlist)
    {
        if (orderlist->objectName().isEmpty())
            orderlist->setObjectName(QStringLiteral("orderlist"));
        orderlist->resize(610, 412);
        label = new QLabel(orderlist);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 10, 161, 41));
        tableWidget = new QTableWidget(orderlist);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 70, 611, 151));
        lineEdit = new QLineEdit(orderlist);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(210, 260, 181, 21));
        lineEdit_2 = new QLineEdit(orderlist);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 300, 181, 21));
        remoneyBtn = new QPushButton(orderlist);
        remoneyBtn->setObjectName(QStringLiteral("remoneyBtn"));
        remoneyBtn->setGeometry(QRect(460, 350, 93, 28));
        remoneyBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        inBtn = new QPushButton(orderlist);
        inBtn->setObjectName(QStringLiteral("inBtn"));
        inBtn->setGeometry(QRect(20, 350, 93, 28));
        inBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        leaveBtn = new QPushButton(orderlist);
        leaveBtn->setObjectName(QStringLiteral("leaveBtn"));
        leaveBtn->setGeometry(QRect(240, 350, 93, 28));
        leaveBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        label_2 = new QLabel(orderlist);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 101, 20));

        retranslateUi(orderlist);

        QMetaObject::connectSlotsByName(orderlist);
    } // setupUi

    void retranslateUi(QDialog *orderlist)
    {
        orderlist->setWindowTitle(QApplication::translate("orderlist", "Dialog", nullptr));
        label->setText(QApplication::translate("orderlist", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">\350\256\242\345\215\225\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("orderlist", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("orderlist", "\345\205\245\344\275\217\346\227\266\351\227\264\357\274\232\345\271\264/\346\234\210/\346\227\245", nullptr));
        remoneyBtn->setText(QApplication::translate("orderlist", "\345\220\214\346\204\217\351\200\200\346\254\276", nullptr));
        inBtn->setText(QApplication::translate("orderlist", "\345\212\236\347\220\206\345\205\245\344\275\217", nullptr));
        leaveBtn->setText(QApplication::translate("orderlist", "\345\212\236\347\220\206\351\200\200\346\210\277", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class orderlist: public Ui_orderlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERLIST_H
