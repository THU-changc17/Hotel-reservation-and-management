#ifndef ORDERDIALOG_H
#define ORDERDIALOG_H

#include <QDialog>
#include"all_headers.h"
namespace Ui {
class orderdialog;
}

class orderdialog : public QDialog
{
    Q_OBJECT

public:
    explicit orderdialog(QWidget *parent = 0);
    ~orderdialog();
public slots:
    void receive(QString str);
private slots:
    void on_pushButton_clicked();

private:
    Ui::orderdialog *ui;
    QSqlTableModel *model;
};

#endif // ORDERDIALOG_H
