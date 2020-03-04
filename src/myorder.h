#ifndef MYORDER_H
#define MYORDER_H
#include"all_headers.h"
#include"data_object.h"
#include<QSqlDatabase>
#include <QDialog>

namespace Ui {
class myorder;
}

class myorder : public QDialog
{
    Q_OBJECT

public:
    explicit myorder(QWidget *parent = 0);
    ~myorder();
    QList<QString>idcardlist;
    QList<QString>namelist;
    QList<QString>phonenumlist;
    QList<QString>hotelnamelist;
    QList<QString>roomnumlist;
    QList<QString>timelist;
    QList<QString>statelist;
private slots:
    void on_searchBtn_clicked();

    void on_submitBtn_clicked();

    void on_remoneyBtn_clicked();

    void on_detBtn_clicked();

private:
    Ui::myorder *ui;
};

#endif // MYORDER_H
