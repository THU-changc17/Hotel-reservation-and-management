/********************************************************************************
** Form generated from reading UI file 'idendialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDENDIALOG_H
#define UI_IDENDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_idendialog
{
public:
    QLabel *label;
    QPushButton *customerpushBtn;
    QPushButton *adminpushBtn;

    void setupUi(QDialog *idendialog)
    {
        if (idendialog->objectName().isEmpty())
            idendialog->setObjectName(QStringLiteral("idendialog"));
        idendialog->resize(400, 300);
        label = new QLabel(idendialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 10, 131, 121));
        customerpushBtn = new QPushButton(idendialog);
        customerpushBtn->setObjectName(QStringLiteral("customerpushBtn"));
        customerpushBtn->setGeometry(QRect(130, 160, 93, 28));
        adminpushBtn = new QPushButton(idendialog);
        adminpushBtn->setObjectName(QStringLiteral("adminpushBtn"));
        adminpushBtn->setGeometry(QRect(130, 220, 93, 28));

        retranslateUi(idendialog);

        QMetaObject::connectSlotsByName(idendialog);
    } // setupUi

    void retranslateUi(QDialog *idendialog)
    {
        idendialog->setWindowTitle(QApplication::translate("idendialog", "Dialog", nullptr));
        label->setText(QApplication::translate("idendialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">\346\254\242 \350\277\216\357\274\201</span></p><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">\350\257\267\351\200\211\346\213\251\346\202\250\347\232\204\350\272\253\344\273\275</span></p></body></html>", nullptr));
        customerpushBtn->setText(QApplication::translate("idendialog", "\351\241\276 \345\256\242", nullptr));
        adminpushBtn->setText(QApplication::translate("idendialog", "\347\256\241\347\220\206\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class idendialog: public Ui_idendialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDENDIALOG_H
