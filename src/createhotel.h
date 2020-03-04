#ifndef CREATEHOTEL_H
#define CREATEHOTEL_H

#include <QDialog>

namespace Ui {
class createhotel;
}

class createhotel : public QDialog
{
    Q_OBJECT

public:
    explicit createhotel(QWidget *parent = 0);
    ~createhotel();

private slots:


    void on_createBtn_clicked();

    void on_manageBtn_clicked();

private:
    Ui::createhotel *ui;
};

#endif // CREATEHOTEL_H
