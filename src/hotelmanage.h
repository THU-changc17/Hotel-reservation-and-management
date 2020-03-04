#ifndef HOTELMANAGE_H
#define HOTELMANAGE_H
#include"modifyhotel.h"
#include <QDialog>
#include"orderlist.h"
namespace Ui {
class hotelmanage;
}

class hotelmanage : public QDialog
{
    Q_OBJECT

public:
    explicit hotelmanage(QWidget *parent = 0);
    ~hotelmanage();
signals:
    void send(QString str);
private slots:
    void on_roomsearchBtn_clicked();

    void on_ordersearchBtn_clicked();

    void on_modifyBtn_clicked();

private:
    Ui::hotelmanage *ui;
    modifyhotel *mod;
    orderlist *order;
};

#endif // HOTELMANAGE_H
