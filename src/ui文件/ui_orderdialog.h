/********************************************************************************
** Form generated from reading UI file 'orderdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERDIALOG_H
#define UI_ORDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_orderdialog
{
public:
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QLabel *label_9;
    QDateEdit *dateEdit;

    void setupUi(QDialog *orderdialog)
    {
        if (orderdialog->objectName().isEmpty())
            orderdialog->setObjectName(QStringLiteral("orderdialog"));
        orderdialog->resize(745, 471);
        orderdialog->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        tableView = new QTableView(orderdialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(250, 40, 461, 321));
        label = new QLabel(orderdialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 141, 20));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        label_2 = new QLabel(orderdialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 110, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\344\273\277\345\256\213\";\n"
"font: 10pt \"\344\273\277\345\256\213\";"));
        lineEdit = new QLineEdit(orderdialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 110, 113, 21));
        label_3 = new QLabel(orderdialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 160, 91, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        lineEdit_2 = new QLineEdit(orderdialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 190, 231, 21));
        label_4 = new QLabel(orderdialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 240, 72, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        lineEdit_3 = new QLineEdit(orderdialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 270, 231, 21));
        label_5 = new QLabel(orderdialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 330, 100, 20));
        lineEdit_4 = new QLineEdit(orderdialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 330, 113, 20));
        label_6 = new QLabel(orderdialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 380, 81, 20));
        label_7 = new QLabel(orderdialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 380, 121, 16));
        pushButton = new QPushButton(orderdialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(640, 380, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        checkBox = new QCheckBox(orderdialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(490, 380, 91, 25));
        label_9 = new QLabel(orderdialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(250, 390, 91, 21));
        dateEdit = new QDateEdit(orderdialog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(350, 390, 110, 22));

        retranslateUi(orderdialog);

        QMetaObject::connectSlotsByName(orderdialog);
    } // setupUi

    void retranslateUi(QDialog *orderdialog)
    {
        orderdialog->setWindowTitle(QApplication::translate("orderdialog", "Dialog", nullptr));
        label->setText(QApplication::translate("orderdialog", "<html><head/><body><p><span style=\" font-weight:600;\">\345\241\253\345\206\231\350\256\242\345\215\225\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("orderdialog", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("orderdialog", "<html><head/><body><p><span style=\" font-weight:600;\">\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("orderdialog", "<html><head/><body><p><span style=\" font-weight:600;\">\346\211\213\346\234\272\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("orderdialog", "<html><head/><body><p><span style=\" font-weight:600;\">\351\200\211\346\213\251\346\210\277\351\227\264\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("orderdialog", "<html><head/><body><p><span style=\" font-weight:600;\">\351\205\222\345\272\227\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_7->setText(QString());
        pushButton->setText(QApplication::translate("orderdialog", "\344\273\230 \346\254\276", nullptr));
        checkBox->setText(QApplication::translate("orderdialog", "\347\241\256\350\256\244\350\256\242\345\215\225", nullptr));
        label_9->setText(QApplication::translate("orderdialog", "<html><head/><body><p><span style=\" font-weight:600;\">\345\205\245\344\275\217\346\227\266\351\227\264\357\274\232</span></p><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class orderdialog: public Ui_orderdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERDIALOG_H
