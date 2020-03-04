/********************************************************************************
** Form generated from reading UI file 'photodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTODIALOG_H
#define UI_PHOTODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_photodialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_6;

    void setupUi(QDialog *photodialog)
    {
        if (photodialog->objectName().isEmpty())
            photodialog->setObjectName(QStringLiteral("photodialog"));
        photodialog->resize(802, 466);
        label = new QLabel(photodialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 171, 141));
        label_2 = new QLabel(photodialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 60, 360, 120));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_3 = new QLabel(photodialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(560, 60, 201, 111));
        label_4 = new QLabel(photodialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 160, 171, 121));
        label_5 = new QLabel(photodialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 170, 361, 101));
        label_5->setFont(font);
        label_7 = new QLabel(photodialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 270, 181, 121));
        label_8 = new QLabel(photodialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(190, 289, 371, 91));
        label_8->setFont(font);
        label_9 = new QLabel(photodialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(560, 280, 201, 121));
        label_6 = new QLabel(photodialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(560, 170, 201, 111));

        retranslateUi(photodialog);

        QMetaObject::connectSlotsByName(photodialog);
    } // setupUi

    void retranslateUi(QDialog *photodialog)
    {
        photodialog->setWindowTitle(QApplication::translate("photodialog", "Dialog", nullptr));
        label->setText(QApplication::translate("photodialog", "<html><head/><body><p><img src=\":/Image/single.jpg\"/></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("photodialog", " \345\215\225\344\272\272\351\227\264: \351\253\230\347\272\247\345\244\247\345\272\212 \347\251\272\350\260\203\347\224\265\350\247\206 \346\227\240\347\272\277\344\270\212\347\275\221,\n"
" \347\213\254\347\253\213\345\215\253\346\265\264", nullptr));
        label_3->setText(QApplication::translate("photodialog", "<html><head/><body><p><img src=\":/Image/singleroom.jpg\"/></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("photodialog", "<html><head/><body><p><img src=\":/Image/double.jpg\"/></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("photodialog", "\345\217\214\344\272\272\351\227\264: \350\210\222\351\200\202\345\245\227\345\272\212 \346\227\240\347\272\277\344\270\212\347\275\221 \347\213\254\347\253\213\345\215\253\346\265\264 \n"
"\347\251\272\350\260\203\347\224\265\350\247\206 \345\205\215\350\264\271\346\227\251\351\244\220", nullptr));
        label_7->setText(QApplication::translate("photodialog", "<html><head/><body><p><img src=\":/Image/Deluxe.jpg\"/></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("photodialog", "\350\261\252\345\215\216\345\245\227\351\227\264: \350\261\252\345\215\216\350\256\276\346\226\275 \347\251\272\350\260\203\347\224\265\350\247\206 \346\227\240\347\272\277\344\270\212\347\275\221 \n"
"\347\213\254\347\253\213\345\215\253\346\265\264 \345\201\245\350\272\253\350\256\276\346\226\275 \347\211\271\346\256\212\346\234\215\345\212\241 ", nullptr));
        label_9->setText(QApplication::translate("photodialog", "<html><head/><body><p><img src=\":/Image/many.jpg\"/></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("photodialog", "<html><head/><body><p><img src=\":/Image/doubleroom.jpg\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class photodialog: public Ui_photodialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTODIALOG_H
