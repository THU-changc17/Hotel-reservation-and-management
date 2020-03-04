/********************************************************************************
** Form generated from reading UI file 'checkindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKINDIALOG_H
#define UI_CHECKINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_checkindialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QPushButton *searchBtn;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QPushButton *starlowerBtn;
    QPushButton *starhigherBtn;
    QLabel *label_5;
    QPushButton *scorelowerBtn;
    QPushButton *scorehigherBtn;
    QLineEdit *lineEdit_2;
    QPushButton *orderBtn;
    QPushButton *myorderBtn;
    QTableWidget *tableWidget;
    QPushButton *returnBtn;
    QPushButton *photoBtn;

    void setupUi(QDialog *checkindialog)
    {
        if (checkindialog->objectName().isEmpty())
            checkindialog->setObjectName(QStringLiteral("checkindialog"));
        checkindialog->resize(809, 574);
        label = new QLabel(checkindialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 91, 21));
        label_2 = new QLabel(checkindialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 20, 72, 21));
        label_3 = new QLabel(checkindialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(390, 20, 101, 21));
        comboBox_2 = new QComboBox(checkindialog);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(490, 20, 87, 22));
        searchBtn = new QPushButton(checkindialog);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setGeometry(QRect(650, 20, 93, 28));
        searchBtn->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\346\245\267\344\275\223\";\n"
""));
        lineEdit = new QLineEdit(checkindialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(610, 60, 171, 21));
        label_4 = new QLabel(checkindialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 70, 111, 20));
        starlowerBtn = new QPushButton(checkindialog);
        starlowerBtn->setObjectName(QStringLiteral("starlowerBtn"));
        starlowerBtn->setGeometry(QRect(20, 110, 93, 28));
        starhigherBtn = new QPushButton(checkindialog);
        starhigherBtn->setObjectName(QStringLiteral("starhigherBtn"));
        starhigherBtn->setGeometry(QRect(20, 160, 93, 28));
        label_5 = new QLabel(checkindialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 360, 111, 20));
        scorelowerBtn = new QPushButton(checkindialog);
        scorelowerBtn->setObjectName(QStringLiteral("scorelowerBtn"));
        scorelowerBtn->setGeometry(QRect(20, 410, 93, 28));
        scorehigherBtn = new QPushButton(checkindialog);
        scorehigherBtn->setObjectName(QStringLiteral("scorehigherBtn"));
        scorehigherBtn->setGeometry(QRect(20, 460, 93, 28));
        lineEdit_2 = new QLineEdit(checkindialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(250, 20, 113, 21));
        orderBtn = new QPushButton(checkindialog);
        orderBtn->setObjectName(QStringLiteral("orderBtn"));
        orderBtn->setGeometry(QRect(310, 50, 93, 28));
        myorderBtn = new QPushButton(checkindialog);
        myorderBtn->setObjectName(QStringLiteral("myorderBtn"));
        myorderBtn->setGeometry(QRect(20, 250, 93, 28));
        tableWidget = new QTableWidget(checkindialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(180, 100, 581, 431));
        returnBtn = new QPushButton(checkindialog);
        returnBtn->setObjectName(QStringLiteral("returnBtn"));
        returnBtn->setGeometry(QRect(460, 50, 93, 28));
        photoBtn = new QPushButton(checkindialog);
        photoBtn->setObjectName(QStringLiteral("photoBtn"));
        photoBtn->setGeometry(QRect(160, 50, 101, 28));

        retranslateUi(checkindialog);

        QMetaObject::connectSlotsByName(checkindialog);
    } // setupUi

    void retranslateUi(QDialog *checkindialog)
    {
        checkindialog->setWindowTitle(QApplication::translate("checkindialog", "Dialog", nullptr));
        label->setText(QApplication::translate("checkindialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\346\220\234\347\264\242\351\205\222\345\272\227\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("checkindialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\347\233\256\347\232\204\345\234\260\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("checkindialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\351\205\222\345\272\227\347\261\273\345\210\253\357\274\232</span></p></body></html>", nullptr));
        comboBox_2->setItemText(0, QString());
        comboBox_2->setItemText(1, QApplication::translate("checkindialog", "5", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("checkindialog", "4", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("checkindialog", "3", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("checkindialog", "2", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBox_2->setToolTip(QApplication::translate("checkindialog", "<html><head/><body><p>\350\257\267\351\200\211\346\213\251\351\205\222\345\272\227\347\232\204\346\230\237\347\272\247</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        searchBtn->setText(QApplication::translate("checkindialog", "\346\220\234 \347\264\242", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("checkindialog", "(\351\200\211\345\241\253)\351\205\222\345\272\227\345\234\260\345\214\272\\\345\225\206\344\270\232\350\241\227", nullptr));
        label_4->setText(QApplication::translate("checkindialog", "<html><head/><body><p><span style=\" font-weight:600;\">\346\214\211\347\205\247\347\272\247\345\210\253\346\216\222\345\272\217\357\274\232</span></p></body></html>", nullptr));
        starlowerBtn->setText(QApplication::translate("checkindialog", "\347\224\261\351\253\230\345\210\260\344\275\216", nullptr));
        starhigherBtn->setText(QApplication::translate("checkindialog", "\347\224\261\344\275\216\345\210\260\351\253\230", nullptr));
        label_5->setText(QApplication::translate("checkindialog", "<html><head/><body><p><span style=\" font-weight:600;\">\346\214\211\347\205\247\350\257\204\345\210\206\346\216\222\345\272\217\357\274\232</span></p></body></html>", nullptr));
        scorelowerBtn->setText(QApplication::translate("checkindialog", "\347\224\261\351\253\230\345\210\260\344\275\216", nullptr));
        scorehigherBtn->setText(QApplication::translate("checkindialog", "\347\224\261\344\275\216\345\210\260\351\253\230", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("checkindialog", "\350\257\267\345\241\253\345\206\231\345\237\216\345\270\202\345\220\215", nullptr));
        orderBtn->setText(QApplication::translate("checkindialog", "\346\210\221\350\246\201\351\242\204\350\256\242", nullptr));
        myorderBtn->setText(QApplication::translate("checkindialog", "\346\210\221\347\232\204\350\256\242\345\215\225", nullptr));
#ifndef QT_NO_TOOLTIP
        tableWidget->setToolTip(QApplication::translate("checkindialog", "<html><head/><body><p>\345\217\214\345\207\273\351\205\222\345\272\227ID\345\217\267\357\274\214\346\237\245\347\234\213\351\205\222\345\272\227\350\257\246\347\273\206\344\277\241\346\201\257</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        returnBtn->setText(QApplication::translate("checkindialog", "\350\277\224\345\233\236\351\205\222\345\272\227\351\241\265", nullptr));
        photoBtn->setText(QApplication::translate("checkindialog", "\351\205\222\345\272\227\347\205\247\347\211\207\351\242\204\350\247\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checkindialog: public Ui_checkindialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKINDIALOG_H
