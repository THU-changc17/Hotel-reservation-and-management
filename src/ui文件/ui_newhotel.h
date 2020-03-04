/********************************************************************************
** Form generated from reading UI file 'newhotel.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWHOTEL_H
#define UI_NEWHOTEL_H

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

class Ui_newhotel
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *newhotel)
    {
        if (newhotel->objectName().isEmpty())
            newhotel->setObjectName(QStringLiteral("newhotel"));
        newhotel->resize(420, 434);
        label = new QLabel(newhotel);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 10, 251, 51));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        label_2 = new QLabel(newhotel);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 130, 81, 25));
        lineEdit = new QLineEdit(newhotel);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 130, 171, 25));
        label_3 = new QLabel(newhotel);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 230, 61, 25));
        lineEdit_2 = new QLineEdit(newhotel);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 180, 91, 25));
        label_4 = new QLabel(newhotel);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 290, 151, 25));
        lineEdit_3 = new QLineEdit(newhotel);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 230, 91, 25));
        checkBox = new QCheckBox(newhotel);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(130, 360, 181, 19));
        checkBox->setStyleSheet(QString::fromUtf8("font: 11pt \"\344\273\277\345\256\213\";"));
        pushButton = new QPushButton(newhotel);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 390, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        label_5 = new QLabel(newhotel);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 180, 51, 25));
        lineEdit_4 = new QLineEdit(newhotel);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 290, 151, 25));
        label_6 = new QLabel(newhotel);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 80, 91, 21));
        lineEdit_5 = new QLineEdit(newhotel);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(160, 80, 121, 21));

        retranslateUi(newhotel);

        QMetaObject::connectSlotsByName(newhotel);
    } // setupUi

    void retranslateUi(QDialog *newhotel)
    {
        newhotel->setWindowTitle(QApplication::translate("newhotel", "Dialog", nullptr));
        label->setText(QApplication::translate("newhotel", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\350\257\267\345\241\253\345\206\231\346\202\250\347\232\204\351\205\222\345\272\227\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("newhotel", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\351\205\222\345\272\227\345\220\215\357\274\232</span></p></body></html>", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("newhotel", "\350\257\267\344\273\245\345\237\216\345\270\202+\351\205\222\345\272\227\346\234\254\345\220\215\345\241\253\345\206\231", nullptr));
        label_3->setText(QApplication::translate("newhotel", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\345\237\216\345\270\202\357\274\232</span></p></body></html>", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("newhotel", "\350\257\267\345\241\253\345\206\231\346\225\260\345\255\227", nullptr));
        label_4->setText(QApplication::translate("newhotel", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\346\211\200\345\234\250\345\214\272\345\237\237/\350\241\227\351\201\223\357\274\232</span></p></body></html>", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("newhotel", "\347\234\201\347\225\245\"\345\270\202\"\345\255\227", nullptr));
        checkBox->setText(QApplication::translate("newhotel", "\346\210\221\345\267\262\347\241\256\350\256\244\344\270\212\350\277\260\344\277\241\346\201\257", nullptr));
        pushButton->setText(QApplication::translate("newhotel", "\346\217\220 \344\272\244", nullptr));
        label_5->setText(QApplication::translate("newhotel", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\346\230\237\347\272\247\357\274\232</span></p></body></html>", nullptr));
        lineEdit_4->setPlaceholderText(QString());
        label_6->setText(QApplication::translate("newhotel", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\350\201\224\347\263\273\346\226\271\345\274\217\357\274\232</span></p></body></html>", nullptr));
        lineEdit_5->setPlaceholderText(QApplication::translate("newhotel", "\350\257\267\345\241\253\345\206\231\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newhotel: public Ui_newhotel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWHOTEL_H
