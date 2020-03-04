/********************************************************************************
** Form generated from reading UI file 'regdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGDIALOG_H
#define UI_REGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_regdialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *namelineEdit;
    QLabel *label_3;
    QLineEdit *pwdlineEdit;
    QLabel *label_4;
    QLineEdit *repwdlineEdit;
    QPushButton *pushButton;
    QPushButton *returnBtn;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;

    void setupUi(QDialog *regdialog)
    {
        if (regdialog->objectName().isEmpty())
            regdialog->setObjectName(QStringLiteral("regdialog"));
        regdialog->resize(593, 396);
        label = new QLabel(regdialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 30, 261, 51));
        label_2 = new QLabel(regdialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 120, 91, 20));
        namelineEdit = new QLineEdit(regdialog);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));
        namelineEdit->setGeometry(QRect(270, 120, 150, 20));
        label_3 = new QLabel(regdialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 180, 70, 20));
        pwdlineEdit = new QLineEdit(regdialog);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(270, 180, 150, 20));
        pwdlineEdit->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(regdialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 240, 101, 20));
        repwdlineEdit = new QLineEdit(regdialog);
        repwdlineEdit->setObjectName(QStringLiteral("repwdlineEdit"));
        repwdlineEdit->setGeometry(QRect(270, 240, 150, 21));
        repwdlineEdit->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(regdialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 320, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        returnBtn = new QPushButton(regdialog);
        returnBtn->setObjectName(QStringLiteral("returnBtn"));
        returnBtn->setGeometry(QRect(470, 320, 93, 28));
        returnBtn->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        checkBox = new QCheckBox(regdialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(170, 290, 101, 19));
        checkBox->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        checkBox_2 = new QCheckBox(regdialog);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(320, 290, 121, 19));
        checkBox_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));

        retranslateUi(regdialog);

        QMetaObject::connectSlotsByName(regdialog);
    } // setupUi

    void retranslateUi(QDialog *regdialog)
    {
        regdialog->setWindowTitle(QApplication::translate("regdialog", "Dialog", nullptr));
        label->setText(QApplication::translate("regdialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\346\254\242\350\277\216\346\263\250\345\206\214</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("regdialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", nullptr));
        namelineEdit->setPlaceholderText(QApplication::translate("regdialog", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QApplication::translate("regdialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\345\257\206 \347\240\201\357\274\232</span></p></body></html>", nullptr));
        pwdlineEdit->setPlaceholderText(QApplication::translate("regdialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_4->setText(QApplication::translate("regdialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        repwdlineEdit->setPlaceholderText(QApplication::translate("regdialog", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("regdialog", "\346\263\250 \345\206\214", nullptr));
        returnBtn->setText(QApplication::translate("regdialog", "\350\277\224 \345\233\236", nullptr));
        checkBox->setText(QApplication::translate("regdialog", "\351\241\276\345\256\242\346\263\250\345\206\214", nullptr));
        checkBox_2->setText(QApplication::translate("regdialog", "\347\256\241\347\220\206\345\221\230\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regdialog: public Ui_regdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGDIALOG_H
