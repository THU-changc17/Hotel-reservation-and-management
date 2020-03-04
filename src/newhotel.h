#ifndef NEWHOTEL_H
#define NEWHOTEL_H

#include <QDialog>
#include"platform.h"
namespace Ui {
class newhotel;
}

class newhotel : public QDialog
{
    Q_OBJECT

public:
    explicit newhotel(QWidget *parent = 0);
    ~newhotel();
private slots:
    void on_pushButton_clicked();

private:
    Ui::newhotel *ui;
    platform *p;
};

#endif // NEWHOTEL_H
