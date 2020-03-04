/********************************************************************************
** Form generated from reading UI file 'myorder.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYORDER_H
#define UI_MYORDER_H

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

class Ui_myorder
{
public:
    QTableWidget *tableWidget;
    QPushButton *remoneyBtn;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *detBtn;
    QPushButton *searchBtn;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QPushButton *submitBtn;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *myorder)
    {
        if (myorder->objectName().isEmpty())
            myorder->setObjectName(QStringLiteral("myorder"));
        myorder->resize(711, 336);
        tableWidget = new QTableWidget(myorder);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 60, 711, 111));
        remoneyBtn = new QPushButton(myorder);
        remoneyBtn->setObjectName(QStringLiteral("remoneyBtn"));
        remoneyBtn->setGeometry(QRect(530, 270, 171, 28));
        remoneyBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        lineEdit = new QLineEdit(myorder);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(600, 240, 91, 21));
        label = new QLabel(myorder);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 10, 111, 31));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";\n"
"font: 14pt \"\344\273\277\345\256\213\";"));
        label_2 = new QLabel(myorder);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(480, 210, 221, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        label_3 = new QLabel(myorder);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 210, 221, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        lineEdit_2 = new QLineEdit(myorder);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 240, 91, 21));
        detBtn = new QPushButton(myorder);
        detBtn->setObjectName(QStringLiteral("detBtn"));
        detBtn->setGeometry(QRect(0, 270, 171, 28));
        detBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        searchBtn = new QPushButton(myorder);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setGeometry(QRect(600, 10, 101, 28));
        searchBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        lineEdit_3 = new QLineEdit(myorder);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 10, 151, 21));
        label_4 = new QLabel(myorder);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 190, 221, 16));
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"\344\273\277\345\256\213\";"));
        lineEdit_5 = new QLineEdit(myorder);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(280, 240, 113, 21));
        submitBtn = new QPushButton(myorder);
        submitBtn->setObjectName(QStringLiteral("submitBtn"));
        submitBtn->setGeometry(QRect(290, 300, 93, 28));
        submitBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        lineEdit_6 = new QLineEdit(myorder);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(280, 270, 113, 21));
        lineEdit_4 = new QLineEdit(myorder);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(280, 210, 113, 21));

        retranslateUi(myorder);

        QMetaObject::connectSlotsByName(myorder);
    } // setupUi

    void retranslateUi(QDialog *myorder)
    {
        myorder->setWindowTitle(QApplication::translate("myorder", "Dialog", nullptr));
        remoneyBtn->setText(QApplication::translate("myorder", "\345\217\226\346\266\210\350\256\242\345\215\225\345\271\266\347\224\263\350\257\267\351\200\200\346\254\276", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("myorder", "\350\256\242\345\215\225\346\227\245\346\234\237", nullptr));
        label->setText(QApplication::translate("myorder", "<html><head/><body><p><span style=\" font-weight:600;\">\350\256\242\345\215\225\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("myorder", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\350\257\267\350\276\223\345\205\245\346\202\250\346\203\263\351\200\200\346\254\276\347\232\204\350\256\242\345\215\225\346\227\245\346\234\237\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("myorder", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\350\257\267\350\276\223\345\205\245\346\202\250\346\203\263\345\210\240\351\231\244\347\232\204\350\256\242\345\215\225\346\227\245\346\234\237\357\274\232</span></p></body></html>", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("myorder", "\350\256\242\345\215\225\346\227\245\346\234\237", nullptr));
        detBtn->setText(QApplication::translate("myorder", "\345\210\240\351\231\244\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
        searchBtn->setText(QApplication::translate("myorder", "\346\237\245\347\234\213/\345\210\267\346\226\260", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("myorder", "\350\257\267\345\241\253\345\206\231\346\202\250\347\232\204\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        label_4->setText(QApplication::translate("myorder", "<html><head/><body><p><span style=\" font-weight:600;\">\350\257\267\350\276\223\345\205\245\346\202\250\346\203\263\350\257\204\345\210\206\347\232\204\350\256\242\345\215\225\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_5->setToolTip(QApplication::translate("myorder", "<html><head/><body><p>\350\257\267\344\277\235\347\225\231\344\270\200\344\275\215\345\260\217\346\225\260</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit_5->setPlaceholderText(QApplication::translate("myorder", "\351\205\222\345\272\227\345\220\215", nullptr));
        submitBtn->setText(QApplication::translate("myorder", "\346\217\220\344\272\244", nullptr));
        lineEdit_6->setPlaceholderText(QApplication::translate("myorder", "\350\257\204\345\210\206(5\345\210\206\346\273\241\345\210\206)", nullptr));
        lineEdit_4->setPlaceholderText(QApplication::translate("myorder", "\350\256\242\345\215\225\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myorder: public Ui_myorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYORDER_H
