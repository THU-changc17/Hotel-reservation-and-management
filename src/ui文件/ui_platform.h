/********************************************************************************
** Form generated from reading UI file 'platform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLATFORM_H
#define UI_PLATFORM_H

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

class Ui_platform
{
public:
    QPushButton *passBtn;
    QTableWidget *tableWidget;
    QPushButton *unpassBtn;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QDialog *platform)
    {
        if (platform->objectName().isEmpty())
            platform->setObjectName(QStringLiteral("platform"));
        platform->resize(436, 314);
        passBtn = new QPushButton(platform);
        passBtn->setObjectName(QStringLiteral("passBtn"));
        passBtn->setGeometry(QRect(0, 240, 93, 25));
        passBtn->setStyleSheet(QString::fromUtf8("font: 10pt \"\344\273\277\345\256\213\";"));
        tableWidget = new QTableWidget(platform);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(50, 50, 321, 161));
        unpassBtn = new QPushButton(platform);
        unpassBtn->setObjectName(QStringLiteral("unpassBtn"));
        unpassBtn->setGeometry(QRect(330, 240, 93, 25));
        unpassBtn->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";\n"
"font: 10pt \"\344\273\277\345\256\213\";"));
        label = new QLabel(platform);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 220, 72, 25));
        lineEdit = new QLineEdit(platform);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 220, 91, 21));
        label_2 = new QLabel(platform);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 270, 72, 21));
        lineEdit_2 = new QLineEdit(platform);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 270, 111, 21));
        label_3 = new QLabel(platform);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 10, 91, 21));

        retranslateUi(platform);

        QMetaObject::connectSlotsByName(platform);
    } // setupUi

    void retranslateUi(QDialog *platform)
    {
        platform->setWindowTitle(QApplication::translate("platform", "Dialog", nullptr));
        passBtn->setText(QApplication::translate("platform", "\351\200\232\350\277\207\347\224\263\350\257\267", nullptr));
        unpassBtn->setText(QApplication::translate("platform", "\344\270\215\351\200\232\350\277\207", nullptr));
        label->setText(QApplication::translate("platform", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">ID\345\217\267\357\274\232</span></p></body></html>", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("platform", "\350\257\267\350\276\223\345\205\245ID\345\217\267", nullptr));
        label_2->setText(QApplication::translate("platform", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\351\205\222\345\272\227\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("platform", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\345\256\241\346\240\270\347\263\273\347\273\237:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class platform: public Ui_platform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLATFORM_H
