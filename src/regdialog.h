#ifndef REGDIALOG_H
#define REGDIALOG_H

#include <QDialog>

namespace Ui {
class regdialog;
}

class regdialog : public QDialog
{
    Q_OBJECT

public:
    explicit regdialog(QWidget *parent = 0);
    ~regdialog();

private slots:
    void on_pushButton_clicked();
    void on_returnBtn_clicked();

private:
    Ui::regdialog *ui;
};

#endif // REGDIALOG_H
