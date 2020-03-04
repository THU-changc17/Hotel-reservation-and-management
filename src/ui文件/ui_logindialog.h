/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

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

class Ui_loginDialog
{
public:
    QLabel *label;
    QLabel *namelabel;
    QLabel *passwordlabel;
    QLineEdit *loginlineEdit;
    QLineEdit *pwdlineEdit;
    QPushButton *quitBtn;
    QLabel *newlabel;
    QPushButton *regBtn;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QStringLiteral("loginDialog"));
        loginDialog->resize(656, 492);
        label = new QLabel(loginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 90, 361, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        namelabel = new QLabel(loginDialog);
        namelabel->setObjectName(QStringLiteral("namelabel"));
        namelabel->setGeometry(QRect(120, 210, 121, 31));
        namelabel->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        passwordlabel = new QLabel(loginDialog);
        passwordlabel->setObjectName(QStringLiteral("passwordlabel"));
        passwordlabel->setGeometry(QRect(130, 280, 101, 31));
        passwordlabel->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        loginlineEdit = new QLineEdit(loginDialog);
        loginlineEdit->setObjectName(QStringLiteral("loginlineEdit"));
        loginlineEdit->setGeometry(QRect(250, 210, 181, 30));
        pwdlineEdit = new QLineEdit(loginDialog);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(250, 280, 181, 30));
        pwdlineEdit->setEchoMode(QLineEdit::Password);
        quitBtn = new QPushButton(loginDialog);
        quitBtn->setObjectName(QStringLiteral("quitBtn"));
        quitBtn->setGeometry(QRect(400, 340, 101, 41));
        quitBtn->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        newlabel = new QLabel(loginDialog);
        newlabel->setObjectName(QStringLiteral("newlabel"));
        newlabel->setGeometry(QRect(550, 410, 81, 31));
        newlabel->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        regBtn = new QPushButton(loginDialog);
        regBtn->setObjectName(QStringLiteral("regBtn"));
        regBtn->setGeometry(QRect(540, 450, 93, 28));
        regBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        pushButton = new QPushButton(loginDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 410, 151, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        lineEdit = new QLineEdit(loginDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 450, 121, 21));
        pushButton_2 = new QPushButton(loginDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 340, 101, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        checkBox = new QCheckBox(loginDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(500, 200, 121, 51));
        checkBox->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        checkBox_2 = new QCheckBox(loginDialog);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(500, 280, 91, 31));
        checkBox_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\344\273\277\345\256\213\";\n"
"font: 12pt \"\344\273\277\345\256\213\";"));

        retranslateUi(loginDialog);

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("loginDialog", "<html><head/><body><p><span style=\" font-size:16pt;\">\346\254\242\350\277\216\346\235\245\345\210\260\346\210\220\346\210\220\351\205\222\345\272\227\351\242\204\350\256\242\347\263\273\347\273\237\357\274\201</span></p></body></html>", nullptr));
        namelabel->setText(QApplication::translate("loginDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", nullptr));
        passwordlabel->setText(QApplication::translate("loginDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\345\257\206 \347\240\201\357\274\232</span></p></body></html>", nullptr));
        loginlineEdit->setPlaceholderText(QApplication::translate("loginDialog", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        pwdlineEdit->setPlaceholderText(QApplication::translate("loginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        quitBtn->setText(QApplication::translate("loginDialog", "\351\200\200 \345\207\272", nullptr));
        newlabel->setText(QApplication::translate("loginDialog", "<html><head/><body><p><span style=\" font-weight:600;\">\346\226\260\347\224\250\346\210\267\357\274\237</span></p></body></html>", nullptr));
        regBtn->setText(QApplication::translate("loginDialog", "\347\202\271\346\255\244\346\263\250\345\206\214", nullptr));
        pushButton->setText(QApplication::translate("loginDialog", "\347\263\273\347\273\237\347\256\241\347\220\206\345\221\230\351\200\232\351\201\223", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("loginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\351\222\245", nullptr));
        pushButton_2->setText(QApplication::translate("loginDialog", "\347\231\273 \345\275\225", nullptr));
        checkBox->setText(QApplication::translate("loginDialog", "\351\241\276\345\256\242", nullptr));
        checkBox_2->setText(QApplication::translate("loginDialog", "\347\256\241\347\220\206\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
