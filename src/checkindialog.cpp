#include "checkindialog.h"
#include "ui_checkindialog.h"
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QTableView>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include<QList>
#include"connection.h"
#include"data_object.h"
#include"myorder.h"
#include"checkindialog.h"
#include"photodialog.h"
checkindialog::checkindialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkindialog)
{
    ui->setupUi(this);
    setWindowTitle("酒店信息");
    QPixmap pixmap = QPixmap(":/Image/timg.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
    QStringList header;
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(6);
    header<<"ID"<<"酒店名"<<"星级"<<"城市"<<"区域"<<"评分";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->verticalHeader()->setVisible(false);
    //设置编辑模式
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可编辑
    ui->tableWidget->setSelectionMode( QAbstractItemView::SingleSelection);//设置选中单个
    ord=new orderdialog();
    QObject::connect(this,&checkindialog::send,ord,&orderdialog::receive);
    QSqlQuery query;
    query.exec("select * from myHotelInFR");
    while(query.next())
    {
        idlist<<query.value(0).toString();
        namelist<<query.value(1).toString();
        starlist<<query.value(2).toString();
        provincelist<<query.value(3).toString();
        arealist<<query.value(4).toString();
        evaluationlist<<query.value(5).toString();
    }
}
checkindialog::~checkindialog()
{
    delete ui;
}
void checkindialog::on_tableWidget_itemDoubleClicked(QTableWidgetItem *item)   //双击实现查找酒店对应客房信息
{
    QString ideaname=item->text();
    hotel h;
    h.load_database(ideaname);   //通过酒店的ID号得到酒店名字
    QString r=h.get_name();
    emit send(r);
    qDebug()<<r;
    ui->tableWidget->clear();
    QStringList header;
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(4);
    header<<"房间号"<<"房型"<<"价格"<<"房间状态";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->verticalHeader()->setVisible(false);
    //设置编辑模式
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可编辑
    ui->tableWidget->setSelectionMode( QAbstractItemView::SingleSelection);//设置选中单个
    QList<QString>list1;
    QList<QString>list2;
    QList<QString>list3;
    QList<QString>list4;
    QSqlQuery query;
    query.exec(" select * from "+ideaname);  //通过酒店的ID号将样例初始化
    while(query.next())
    {
        list1<<query.value(0).toString();
        list2<<query.value(1).toString();
        list3<<query.value(2).toString();
        list4<<query.value(3).toString();
    }
    int i,j;
    i=j=0;
    while(i<list1.size())
    {
        ui->tableWidget->setRowCount(list1.size());
        ui->tableWidget->setItem(i,j,new QTableWidgetItem(list1.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(list2.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(list3.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(list4.at(i)));
        j=0;
        i++;
    }
}
void checkindialog::on_searchBtn_clicked()
{
    QString province=ui->lineEdit_2->text();
    QString star=ui->comboBox_2->currentText();
    QString area=ui->lineEdit->text();
    int i=0;
    int rowIndex=0;
    int j=0;
    int k=0;
    if(province=="")
    {
        while(i<idlist.size())
        {
            ui->tableWidget->setRowCount(idlist.size());
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(idlist.at(i)));
            ui->tableWidget->setItem(i,++j,new QTableWidgetItem(namelist.at(i)));
            ui->tableWidget->setItem(i,++j,new QTableWidgetItem(starlist.at(i)));
            ui->tableWidget->setItem(i,++j,new QTableWidgetItem(provincelist.at(i)));
            ui->tableWidget->setItem(i,++j,new QTableWidgetItem(arealist.at(i)));
            ui->tableWidget->setItem(i,++j,new QTableWidgetItem(evaluationlist.at(i)));
            j=0;
            i++;
        }
    }
    if(province!=""&&star==""&&area=="")
    {
        for(i=0;i!=idlist.size();i++)  //将酒店初始化的值赋给表格
        {
            if(provincelist.at(i)==province)
            {
                rowIndex++;
                ui->tableWidget->setRowCount(rowIndex);
                ui->tableWidget->setItem(j,k,new QTableWidgetItem(idlist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(namelist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(starlist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(provincelist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(arealist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(evaluationlist.at(i)));
                j++;
                k=0;
            }
        }
    }
    if(province!=""&&star!=""&&area=="")
    {
        for(i=0;i!=idlist.size();i++)
        {
            if(provincelist.at(i)==province&&starlist.at(i)==star)
            {
                rowIndex++;
                ui->tableWidget->setRowCount(rowIndex);
                ui->tableWidget->setItem(j,k,new QTableWidgetItem(idlist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(namelist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(starlist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(provincelist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(arealist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(evaluationlist.at(i)));
                j++;
                k=0;
            }
        }
    }
    if(province!=""&&star==""&&area!="")
    {
        for(i=0;i!=idlist.size();i++)
        {
            if(provincelist.at(i)==province&&arealist.at(i)==area)
            {
                rowIndex++;
                ui->tableWidget->setRowCount(rowIndex);
                ui->tableWidget->setItem(j,k,new QTableWidgetItem(idlist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(namelist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(starlist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(provincelist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(arealist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(evaluationlist.at(i)));
                j++;
                k=0;
            }
        }
    }
    if(province!=""&&star!=""&&area!="")
    {
        for(i=0;i!=idlist.size();i++)
        {
            if(provincelist.at(i)==province&&starlist.at(i)==star&&arealist.at(i)==area) //按对应信息检索
            {
                rowIndex++;
                ui->tableWidget->setRowCount(rowIndex);
                ui->tableWidget->setItem(j,k,new QTableWidgetItem(idlist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(namelist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(starlist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(provincelist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(arealist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(evaluationlist.at(i)));
                j++;
                k=0;
            }
        }
    }
}

void checkindialog::on_returnBtn_clicked()
{
    ui->tableWidget->clear();
    QStringList header;
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(6);
    header<<"ID"<<"酒店名"<<"星级"<<"城市"<<"区域"<<"评分";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode( QAbstractItemView::SingleSelection);
    int i=0;
    int j=0;
    while(i<idlist.size())
    {
        ui->tableWidget->setRowCount(idlist.size());
        ui->tableWidget->setItem(i,j,new QTableWidgetItem(idlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(namelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(starlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(provincelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(arealist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(evaluationlist.at(i)));
        j=0;
        i++;
    }
}

void checkindialog::on_myorderBtn_clicked()
{
    myorder *m=new myorder;
    m->show();
}

void checkindialog::on_orderBtn_clicked()
{
     ord->show();
}

void checkindialog::on_starlowerBtn_clicked()
{
    QList<QString>idlist;  //使用容器遍历
    QList<QString>namelist;
    QList<QString>starlist;
    QList<QString>provincelist;
    QList<QString>arealist;
    QList<QString>evaluationlist;
    int j=0;
    int i=0;
    for(int i=0;i<ui->tableWidget->rowCount();i++)  //取出表格各列建立链表
    {
        idlist<<ui->tableWidget->item(i,j)->text();
        namelist<<ui->tableWidget->item(i,++j)->text();
        starlist<<ui->tableWidget->item(i,++j)->text();
        provincelist<<ui->tableWidget->item(i,++j)->text();
        arealist<<ui->tableWidget->item(i,++j)->text();
        evaluationlist<<ui->tableWidget->item(i,++j)->text();
        j=0;
    }
    i=j=0;
    for(j=0;j<=idlist.size()-2;j++)   //冒泡排序，以下排序方法相同
    {
        for(i=idlist.size()-1;i>=j+1;i--)
        {
            if(starlist.at(i)>starlist.at(i-1))
            {
                idlist.swap(i,i-1);
                namelist.swap(i,i-1);
                starlist.swap(i,i-1);
                provincelist.swap(i,i-1);
                arealist.swap(i,i-1);
                evaluationlist.swap(i,i-1);
            }
        }
    }
    i=j=0;
    while(i<idlist.size())
    {
        ui->tableWidget->setItem(i,j,new QTableWidgetItem(idlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(namelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(starlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(provincelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(arealist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(evaluationlist.at(i)));
        j=0;
        i++;
    }
}

void checkindialog::on_starhigherBtn_clicked()
{
    QList<QString>idlist;  //使用容器遍历
    QList<QString>namelist;
    QList<QString>starlist;
    QList<QString>provincelist;
    QList<QString>arealist;
    QList<QString>evaluationlist;
    int j=0;
    int i=0;
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        idlist<<ui->tableWidget->item(i,j)->text();
        namelist<<ui->tableWidget->item(i,++j)->text();
        starlist<<ui->tableWidget->item(i,++j)->text();
        provincelist<<ui->tableWidget->item(i,++j)->text();
        arealist<<ui->tableWidget->item(i,++j)->text();
        evaluationlist<<ui->tableWidget->item(i,++j)->text();
        j=0;
    }
    i=j=0;
    for(j=0;j<=idlist.size()-2;j++)
    {
        for(i=idlist.size()-1;i>=j+1;i--)
        {
            if(starlist.at(i)<starlist.at(i-1))
            {
                idlist.swap(i,i-1);
                namelist.swap(i,i-1);
                starlist.swap(i,i-1);
                provincelist.swap(i,i-1);
                arealist.swap(i,i-1);
                evaluationlist.swap(i,i-1);
            }
        }
    }
    i=j=0;
    while(i<idlist.size())
    {
        ui->tableWidget->setItem(i,j,new QTableWidgetItem(idlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(namelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(starlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(provincelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(arealist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(evaluationlist.at(i)));
        j=0;
        i++;
    }
}

void checkindialog::on_scorelowerBtn_clicked()
{
    QList<QString>idlist;  //使用容器遍历
    QList<QString>namelist;
    QList<QString>starlist;
    QList<QString>provincelist;
    QList<QString>arealist;
    QList<QString>evaluationlist;
    int j=0;
    int i=0;
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        idlist<<ui->tableWidget->item(i,j)->text();
        namelist<<ui->tableWidget->item(i,++j)->text();
        starlist<<ui->tableWidget->item(i,++j)->text();
        provincelist<<ui->tableWidget->item(i,++j)->text();
        arealist<<ui->tableWidget->item(i,++j)->text();
        evaluationlist<<ui->tableWidget->item(i,++j)->text();
        j=0;
    }
    i=j=0;
    for(j=0;j<=idlist.size()-2;j++)
    {
        for(i=idlist.size()-1;i>=j+1;i--)
        {
            if(evaluationlist.at(i)>evaluationlist.at(i-1))
            {
                idlist.swap(i,i-1);
                namelist.swap(i,i-1);
                starlist.swap(i,i-1);
                provincelist.swap(i,i-1);
                arealist.swap(i,i-1);
                evaluationlist.swap(i,i-1);
            }
        }
    }
    i=j=0;
    while(i<idlist.size())
    {
        ui->tableWidget->setItem(i,j,new QTableWidgetItem(idlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(namelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(starlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(provincelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(arealist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(evaluationlist.at(i)));
        j=0;
        i++;
    }
}

void checkindialog::on_scorehigherBtn_clicked()
{
    QList<QString>idlist;  //使用容器遍历
    QList<QString>namelist;
    QList<QString>starlist;
    QList<QString>provincelist;
    QList<QString>arealist;
    QList<QString>evaluationlist;
    int j=0;
    int i=0;
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        idlist<<ui->tableWidget->item(i,j)->text();
        namelist<<ui->tableWidget->item(i,++j)->text();
        starlist<<ui->tableWidget->item(i,++j)->text();
        provincelist<<ui->tableWidget->item(i,++j)->text();
        arealist<<ui->tableWidget->item(i,++j)->text();
        evaluationlist<<ui->tableWidget->item(i,++j)->text();
        j=0;
    }
    i=j=0;
    for(j=0;j<=idlist.size()-2;j++)
    {
        for(i=idlist.size()-1;i>=j+1;i--)
        {
            if(evaluationlist.at(i)<evaluationlist.at(i-1))
            {
                idlist.swap(i,i-1);
                namelist.swap(i,i-1);
                starlist.swap(i,i-1);
                provincelist.swap(i,i-1);
                arealist.swap(i,i-1);
                evaluationlist.swap(i,i-1);
            }
        }
    }
    i=j=0;
    while(i<idlist.size())
    {
        ui->tableWidget->setItem(i,j,new QTableWidgetItem(idlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(namelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(starlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(provincelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(arealist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(evaluationlist.at(i)));
        j=0;
        i++;
    }
}

void checkindialog::on_photoBtn_clicked()
{
    photodialog *p=new photodialog();
    p->show();
}
