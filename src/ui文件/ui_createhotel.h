/********************************************************************************
** Form generated from reading UI file 'createhotel.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEHOTEL_H
#define UI_CREATEHOTEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_createhotel
{
public:
    QLabel *label;
    QPushButton *createBtn;
    QPushButton *manageBtn;

    void setupUi(QDialog *createhotel)
    {
        if (createhotel->objectName().isEmpty())
            createhotel->setObjectName(QStringLiteral("createhotel"));
        createhotel->resize(356, 337);
        label = new QLabel(createhotel);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 301, 71));
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"\344\273\277\345\256\213\";"));
        createBtn = new QPushButton(createhotel);
        createBtn->setObjectName(QStringLiteral("createBtn"));
        createBtn->setGeometry(QRect(130, 150, 93, 28));
        createBtn->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));
        manageBtn = new QPushButton(createhotel);
        manageBtn->setObjectName(QStringLiteral("manageBtn"));
        manageBtn->setGeometry(QRect(130, 220, 93, 28));
        manageBtn->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";"));

        retranslateUi(createhotel);

        QMetaObject::connectSlotsByName(createhotel);
    } // setupUi

    void retranslateUi(QDialog *createhotel)
    {
        createhotel->setWindowTitle(QApplication::translate("createhotel", "Dialog", nullptr));
        label->setText(QApplication::translate("createhotel", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\350\257\267\351\200\211\346\213\251\346\202\250\350\246\201\350\277\233\350\241\214\347\232\204\346\223\215\344\275\234\357\274\232</span></p></body></html>", nullptr));
        createBtn->setText(QApplication::translate("createhotel", "\345\210\233\345\273\272\351\205\222\345\272\227", nullptr));
        manageBtn->setText(QApplication::translate("createhotel", "\347\256\241\347\220\206\351\205\222\345\272\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createhotel: public Ui_createhotel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEHOTEL_H
