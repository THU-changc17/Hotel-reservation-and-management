#ifndef CHECKINDIALOG_H
#define CHECKINDIALOG_H
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QTableView>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QDialog>
#include"all_headers.h"
#include"orderdialog.h"
#include"data_object.h"
class QSqlTableModel;
namespace Ui {
class checkindialog;
}

class checkindialog :public QDialog
{
    Q_OBJECT

public:
    explicit checkindialog(QWidget *parent = 0);
    ~checkindialog();
    QList<QString>idlist;  //使用容器遍历
    QList<QString>namelist;
    QList<QString>starlist;
    QList<QString>provincelist;
    QList<QString>arealist;
    QList<QString>evaluationlist;
signals:
    void send(QString str);
private slots:

    void on_tableWidget_itemDoubleClicked(QTableWidgetItem *item);


    void on_searchBtn_clicked();

    void on_returnBtn_clicked();

    void on_myorderBtn_clicked();

    void on_orderBtn_clicked();

    void on_starlowerBtn_clicked();

    void on_starhigherBtn_clicked();

    void on_scorelowerBtn_clicked();

    void on_scorehigherBtn_clicked();

    void on_photoBtn_clicked();

private:
    Ui::checkindialog *ui;
    QSqlTableModel *model;
    orderdialog *ord;
};

#endif // CHECKINDIALOG_H
