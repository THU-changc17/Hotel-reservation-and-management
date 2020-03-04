#include "orderlist.h"
#include "ui_orderlist.h"
#include"orderlist.h"
#include"all_headers.h"
#include"data_object.h"
orderlist::orderlist(QWidget *parent) :
    QDialog(parent),
     ui(new Ui::orderlist)
{
    ui->setupUi(this);
    setWindowTitle("酒店订单");
    QPixmap pixmap = QPixmap(":/Image/timg.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
    ui->tableWidget->clearContents();
    QStringList header;
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(120);
    header<<"身份证号"<<"姓名"<<"电话号码"<<"酒店名"<<"房间号"<<"入住时间"<<"订单状态";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->verticalHeader()->setVisible(false);
    //设置编辑模式
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可编辑
    ui->tableWidget->setSelectionMode( QAbstractItemView::SingleSelection);//设置选中单个
}
orderlist::~orderlist()
{
    delete ui;
}
void orderlist::receive(QString str)
{
    idcardlist.clear();
    namelist.clear();
    phonenumlist.clear();
    hotelnamelist.clear();
    timelist.clear();
    statelist.clear();
    QSqlQuery query;
    query.exec(QString("select * from myorder where hotelname = '%1' ").arg(str));
    while(query.next())
    {
        qDebug()<<query.value(0).toString();
        idcardlist<<query.value(0).toString();
        namelist<<query.value(1).toString();
        phonenumlist<<query.value(2).toString();
        hotelnamelist<<query.value(3).toString();
        roomnumlist<<query.value(4).toString();
        timelist<<query.value(5).toString();
        statelist<<query.value(6).toString();
    }
    int i=0;
    int j=0;
    ui->label_2->setText(QString("%1").arg(str));
    while(i<idcardlist.size())
    {
        ui->tableWidget->setRowCount(idcardlist.size());
        ui->tableWidget->setItem(i,j,new QTableWidgetItem(idcardlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(namelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(phonenumlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(hotelnamelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(roomnumlist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(timelist.at(i)));
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(statelist.at(i)));
        j=0;
        i++;
    }
}

void orderlist::on_remoneyBtn_clicked()
{
    QString hotelname=ui->label_2->text();
    hotel h;
    h.load_database_name(hotelname);
    QString ideaname=h.get_id();
    QString idcard=ui->lineEdit->text();
    QString time=ui->lineEdit_2->text();
    int i=0;
    int len=idcardlist.size();
    for(i=0;i<len;i++)
    {
        if(timelist.at(i)==time&&idcardlist.at(i)==idcard)
        {
             QString roomnum=roomnumlist.at(i);
             QMessageBox::information(this,tr("提示"),tr("已将原预定房间金额返还至对方账户！"),QMessageBox::Ok);
             QSqlQuery query;
             query.exec(QString(" delete from myorder where time = '%1' and idcard = '%2' ").arg(time).arg(idcard));
             idcardlist.removeAt(i);
             namelist.removeAt(i);
             phonenumlist.removeAt(i);
             hotelnamelist.removeAt(i);
             roomnumlist.removeAt(i);
             timelist.removeAt(i);
             statelist.removeAt(i);
             query.exec(QString(" update " + ideaname + " set message= '未预订' where num = '%1' ").arg(roomnum));
        }
    }
}

void orderlist::on_leaveBtn_clicked()
{
    QString hotelname=ui->label_2->text();
    hotel h;
    h.load_database_name(hotelname);
    QString ideaname=h.get_id();
    QString idcard=ui->lineEdit->text();
    QString time=ui->lineEdit_2->text();
    if(idcard==""||time=="")
    {
         QMessageBox::information(this,tr("提示"),tr("请输入完整信息！"),QMessageBox::Ok);
    }
    else
    {
        int i=0;
        int len=idcardlist.size();
        for(i=0;i<len;i++)
        {
            if(timelist.at(i)==time&&idcardlist.at(i)==idcard)
            {
                 QString roomnum=roomnumlist.at(i);
                 QMessageBox::information(this,tr("提示"),tr("顾客已成功办理退房！"),QMessageBox::Ok);
                 QSqlQuery query;
                 query.exec(QString(" update myorder set state = '已退房' where time = '%1' and idcard = '%2' ").arg(time).arg(idcard));
                 query.exec(QString(" update " + ideaname + " set message= '未预订' where num = '%1' ").arg(roomnum));
            }
        }
    }
}

void orderlist::on_inBtn_clicked()
{
    QString hotelname=ui->label_2->text();
    hotel h;
    h.load_database_name(hotelname);
    QString ideaname=h.get_id();
    QString idcard=ui->lineEdit->text();
    QString time=ui->lineEdit_2->text();
    if(idcard==""||time=="")
    {
         QMessageBox::information(this,tr("提示"),tr("请输入完整信息！"),QMessageBox::Ok);
    }
    else
    {
        int i=0;
        int len=idcardlist.size();
        for(i=0;i<len;i++)
        {
            if(timelist.at(i)==time&&idcardlist.at(i)==idcard)
            {
                 QString roomnum=roomnumlist.at(i);
                 QMessageBox::information(this,tr("提示"),tr("顾客已成功办理入住！"),QMessageBox::Ok);
                 QSqlQuery query;
                 query.exec(QString(" update myorder set state = '已入住' where time = '%1' and idcard = '%2' ").arg(time).arg(idcard));
                 query.exec(QString(" update " + ideaname + " set message= '已入住' where num = '%1' ").arg(roomnum));
            }
        }
    }
}
