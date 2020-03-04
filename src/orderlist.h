#ifndef ORDERLIST_H
#define ORDERLIST_H

#include <QDialog>
#include"myorder.h"
namespace Ui {
class orderlist;
}

class orderlist : public QDialog
{
    Q_OBJECT
public slots:
    void receive(QString str);
public:
    explicit orderlist(QWidget *parent = 0);
    ~orderlist();
    QList<QString>idcardlist;
    QList<QString>namelist;
    QList<QString>phonenumlist;
    QList<QString>hotelnamelist;
    QList<QString>roomnumlist;
    QList<QString>timelist;
    QList<QString>statelist;

private slots:

    void on_remoneyBtn_clicked();

    void on_leaveBtn_clicked();

    void on_inBtn_clicked();

private:
    Ui::orderlist *ui;
};

#endif // ORDERLIST_H
