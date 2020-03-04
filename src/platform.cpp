#include "platform.h"
#include "ui_platform.h"
#include"all_headers.h"
#include"data_object.h"
#include<QTime>
#include<QtGlobal>
platform::platform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::platform)
{
    ui->setupUi(this);
    setWindowTitle("审核系统");
    QPixmap pixmap = QPixmap(":/Image/timg.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
    QStringList header;
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(6);
    header<<"联系方式"<<"酒店名"<<"星级"<<"城市"<<"区域"<<"状态";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->verticalHeader()->setVisible(false);
    QList<QString>phonenumlist;   //使用Qlist遍历
    QList<QString>hotelnamelist;
    QList<QString>starlist;
    QList<QString>provincelist;
    QList<QString>arealist;
    QList<QString>statelist;
    QSqlQuery query;
    query.exec("select * from plcheck");
    while(query.next())
    {
        phonenumlist<<query.value(0).toString();
        hotelnamelist<<query.value(1).toString();
        starlist<<query.value(2).toString();
        provincelist<<query.value(3).toString();
        arealist<<query.value(4).toString();
        statelist<<query.value(5).toString();
    }
    int i=0;
    int rowIndex=0;
    int j=0;
    int k=0;
    for(i=0;i!=phonenumlist.size();i++)
    {
        if(statelist.at(i)=="未审核")      //只在系统管理员界面显示未审核的酒店信息
        {
            rowIndex++;
            ui->tableWidget->setRowCount(rowIndex);
            ui->tableWidget->setItem(j,k,new QTableWidgetItem(phonenumlist.at(i)));
            ui->tableWidget->setItem(j,++k,new QTableWidgetItem(hotelnamelist.at(i)));
            ui->tableWidget->setItem(j,++k,new QTableWidgetItem(starlist.at(i)));
            ui->tableWidget->setItem(j,++k,new QTableWidgetItem(provincelist.at(i)));
            ui->tableWidget->setItem(j,++k,new QTableWidgetItem(arealist.at(i)));
            ui->tableWidget->setItem(j,++k,new QTableWidgetItem(statelist.at(i)));
            j++;
            k=0;
        }
    }
}
platform::~platform()
{
    delete ui;
}
void platform::on_passBtn_clicked()
{
    if(ui->lineEdit->text()==""||ui->lineEdit_2->text()=="")
    {
        QMessageBox::warning(this, tr("提示"), tr("请填写完整信息！"));
    }
    else
    {
        QString id=ui->lineEdit->text();
        QString name=ui->lineEdit_2->text();
        QList<QString>phonenumlist;
        QList<QString>hotelnamelist;
        QList<QString>starlist;
        QList<QString>provincelist;
        QList<QString>arealist;
        int j=0;
        int i=0;
        for(i=0;i<ui->tableWidget->rowCount();i++)  //取出表格各列建立链表
        {
            phonenumlist<<ui->tableWidget->item(i,j)->text();
            hotelnamelist<<ui->tableWidget->item(i,++j)->text();
            starlist<<ui->tableWidget->item(i,++j)->text();
            provincelist<<ui->tableWidget->item(i,++j)->text();
            arealist<<ui->tableWidget->item(i,++j)->text();
            j=0;
        }
        int p=hotelnamelist.indexOf(name);
        QString evaluation ="4.5";  //酒店建立初始评分4.5
        hotel h(id,hotelnamelist.at(p),starlist.at(p),provincelist.at(p),arealist.at(p),evaluation);
        h.save_database();
        QSqlQuery query;
        query.exec(QString(" delete from plcheck where name = '%1' ").arg(hotelnamelist.at(p)));
        QMessageBox::information(this,tr("提示"),tr("该酒店已成功添加！"),QMessageBox::Ok);
    }
}

void platform::on_unpassBtn_clicked()
{
    if(ui->lineEdit_2->text()=="")
    {
         QMessageBox::information(this,tr("提示"),tr("请确定您不予通过的酒店名称！"),QMessageBox::Ok);
    }
    else
    {
        QSqlQuery query;
        query.exec(QString(" delete from plcheck where name = '%1' ").arg(ui->lineEdit_2->text()));
        QMessageBox::information(this,tr("提示"),tr("您已拒绝该酒店的申请！"),QMessageBox::Ok);
    }
}
