/********************************************************************************
** Form generated from reading UI file 'modifyhotel.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYHOTEL_H
#define UI_MODIFYHOTEL_H

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

class Ui_modifyhotel
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QPushButton *addBtn;
    QPushButton *modifyBtn;
    QPushButton *detBtn;
    QLabel *label_2;

    void setupUi(QDialog *modifyhotel)
    {
        if (modifyhotel->objectName().isEmpty())
            modifyhotel->setObjectName(QStringLiteral("modifyhotel"));
        modifyhotel->resize(511, 610);
        label = new QLabel(modifyhotel);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 50, 101, 21));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        tableWidget = new QTableWidget(modifyhotel);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 100, 431, 311));
        label_3 = new QLabel(modifyhotel);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 450, 81, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        lineEdit = new QLineEdit(modifyhotel);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 450, 101, 20));
        label_4 = new QLabel(modifyhotel);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 500, 71, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        label_5 = new QLabel(modifyhotel);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 450, 72, 20));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        lineEdit_2 = new QLineEdit(modifyhotel);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 450, 113, 20));
        lineEdit_3 = new QLineEdit(modifyhotel);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 500, 113, 21));
        label_6 = new QLabel(modifyhotel);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(250, 500, 72, 20));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        lineEdit_4 = new QLineEdit(modifyhotel);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(310, 500, 161, 21));
        addBtn = new QPushButton(modifyhotel);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(50, 550, 93, 28));
        addBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        modifyBtn = new QPushButton(modifyhotel);
        modifyBtn->setObjectName(QStringLiteral("modifyBtn"));
        modifyBtn->setGeometry(QRect(210, 550, 93, 28));
        modifyBtn->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\344\273\277\345\256\213\";"));
        detBtn = new QPushButton(modifyhotel);
        detBtn->setObjectName(QStringLiteral("detBtn"));
        detBtn->setGeometry(QRect(360, 550, 93, 28));
        detBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        label_2 = new QLabel(modifyhotel);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 20, 111, 16));

        retranslateUi(modifyhotel);

        QMetaObject::connectSlotsByName(modifyhotel);
    } // setupUi

    void retranslateUi(QDialog *modifyhotel)
    {
        modifyhotel->setWindowTitle(QApplication::translate("modifyhotel", "Dialog", nullptr));
        label->setText(QApplication::translate("modifyhotel", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\346\210\277\351\227\264\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("modifyhotel", "<html><head/><body><p><span style=\" font-weight:600;\">\346\210\277\351\227\264\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("modifyhotel", "<html><head/><body><p><span style=\" font-weight:600;\">\344\273\267\346\240\274\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("modifyhotel", "<html><head/><body><p><span style=\" font-weight:600;\">\346\210\277\345\236\213\357\274\232</span></p></body></html>", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("modifyhotel", "\344\272\272\346\260\221\345\270\201\357\274\232\345\205\203", nullptr));
        label_6->setText(QApplication::translate("modifyhotel", "<html><head/><body><p><span style=\" font-weight:600;\">\345\244\207\346\263\250\357\274\232</span></p></body></html>", nullptr));
        lineEdit_4->setPlaceholderText(QApplication::translate("modifyhotel", "\345\217\257\344\270\215\345\241\253", nullptr));
        addBtn->setText(QApplication::translate("modifyhotel", "\346\267\273 \345\212\240", nullptr));
        modifyBtn->setText(QApplication::translate("modifyhotel", "\344\277\256 \346\224\271", nullptr));
        detBtn->setText(QApplication::translate("modifyhotel", "\345\210\240 \351\231\244", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class modifyhotel: public Ui_modifyhotel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYHOTEL_H
