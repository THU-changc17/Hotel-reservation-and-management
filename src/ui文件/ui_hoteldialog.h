/********************************************************************************
** Form generated from reading UI file 'hoteldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELDIALOG_H
#define UI_HOTELDIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_hoteldialog
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *hoteldialog)
    {
        if (hoteldialog->objectName().isEmpty())
            hoteldialog->setObjectName(QStringLiteral("hoteldialog"));
        hoteldialog->resize(500, 400);
        comboBox = new QComboBox(hoteldialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(230, 110, 87, 22));
        label = new QLabel(hoteldialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 30, 141, 41));
        label_2 = new QLabel(hoteldialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 110, 70, 20));
        label_5 = new QLabel(hoteldialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 170, 91, 31));
        comboBox_2 = new QComboBox(hoteldialog);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(230, 172, 87, 22));
        label_3 = new QLabel(hoteldialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 240, 81, 31));
        lineEdit = new QLineEdit(hoteldialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 243, 180, 20));
        pushButton = new QPushButton(hoteldialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 310, 93, 28));

        retranslateUi(hoteldialog);

        QMetaObject::connectSlotsByName(hoteldialog);
    } // setupUi

    void retranslateUi(QDialog *hoteldialog)
    {
        hoteldialog->setWindowTitle(QApplication::translate("hoteldialog", "Dialog", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QApplication::translate("hoteldialog", "\345\214\227\344\272\254", nullptr));
        comboBox->setItemText(2, QApplication::translate("hoteldialog", "\344\270\212\346\265\267", nullptr));
        comboBox->setItemText(3, QApplication::translate("hoteldialog", "\345\271\277\345\267\236", nullptr));

        label->setText(QApplication::translate("hoteldialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">\346\220\234\347\264\242\351\205\222\345\272\227</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("hoteldialog", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\233\256\347\232\204\345\234\260\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("hoteldialog", "<html><head/><body><p><span style=\" font-size:12pt;\">\351\205\222\345\272\227\347\272\247\345\210\253:</span></p></body></html>", nullptr));
        comboBox_2->setItemText(0, QString());
        comboBox_2->setItemText(1, QApplication::translate("hoteldialog", "5", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("hoteldialog", "4", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("hoteldialog", "3", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("hoteldialog", "2", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBox_2->setToolTip(QApplication::translate("hoteldialog", "<html><head/><body><p>5(\344\272\224\346\230\237\347\272\247\\\350\261\252\345\215\216\357\274\211</p><p>4(\345\233\233\346\230\237\347\272\247\\\351\253\230\347\255\211\357\274\211</p><p>3(\344\270\211\346\230\237\347\272\247\\\350\210\222\351\200\202\357\274\211</p><p>2(\344\272\214\346\230\237\347\272\247\\\347\273\217\346\265\216)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("hoteldialog", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\205\263\351\224\256\350\257\215\357\274\232</span></p></body></html>", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("hoteldialog", "\357\274\210\351\200\211\345\241\253\357\274\211\351\205\222\345\272\227\345\220\215\\\345\234\260\345\214\272", nullptr));
        pushButton->setText(QApplication::translate("hoteldialog", "\346\220\234 \347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hoteldialog: public Ui_hoteldialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELDIALOG_H
