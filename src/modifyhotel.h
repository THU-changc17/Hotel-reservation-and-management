#ifndef MODIFYHOTEL_H
#define MODIFYHOTEL_H
#include <QDialog>
#include"data_object.h"
namespace Ui {
class modifyhotel;
}

class modifyhotel : public QDialog
{
    Q_OBJECT

public:
    explicit modifyhotel(QWidget *parent = 0);
    ~modifyhotel();
    linkedlist l;
public slots:
    void receive(QString str);
private slots:

    void on_addBtn_clicked();

    void on_modifyBtn_clicked();

    void on_detBtn_clicked();

private:
    Ui::modifyhotel *ui;
};

#endif // MODIFYHOTEL_H
