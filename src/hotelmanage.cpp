#include "hotelmanage.h"
#include "ui_hotelmanage.h"
#include"data_object.h"
#include"all_headers.h"
#include<QHeaderView>
#include"modifyhotel.h"
#include"orderlist.h"
hotelmanage::hotelmanage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hotelmanage)
{
    ui->setupUi(this);
    setWindowTitle("酒店管理");
    QPixmap pixmap = QPixmap(":/Image/timg.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
    QStringList header;
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(4);
    header<<"房间号"<<"房型"<<"价格"<<"房间状态";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可编辑
    ui->tableWidget->setSelectionMode( QAbstractItemView::SingleSelection);//设置选中单个
    mod=new modifyhotel();
    QObject::connect(this,&hotelmanage::send,mod,&modifyhotel::receive);
    order=new orderlist();
    QObject::connect(this,&hotelmanage::send,order,&orderlist::receive);
}

hotelmanage::~hotelmanage()
{
    delete ui;
}
void hotelmanage::on_roomsearchBtn_clicked()
{
    if(ui->lineEdit_2->text()=="")
    {
        QMessageBox::information(this,tr("提示"),tr("请填写您的酒店密钥！"),QMessageBox::Ok);
    }
    else
    {
        ui->tableWidget->clearContents();
        QString hotelname=ui->lineEdit->text();
        linkedlist l;
        l.createlist(hotelname);
        room *p=new room;
        p=l.head;
        int i,j;
        i=j=0;
        int rowIndex=0;
        while(p!=NULL)
        {
            rowIndex++;
            ui->tableWidget->setRowCount(rowIndex);
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(p->num));
            ui->tableWidget->setItem(i,++j,new QTableWidgetItem(p->roomtype));
            ui->tableWidget->setItem(i,++j,new QTableWidgetItem(p->price));
            ui->tableWidget->setItem(i,++j,new QTableWidgetItem(p->message));
            i++;
            j=0;
            p=p->next;
        }
    }
}
void hotelmanage::on_ordersearchBtn_clicked()
{
    QString hotelname=ui->lineEdit->text();
    emit send(hotelname);
    order->show();
}

void hotelmanage::on_modifyBtn_clicked()
{
    if(ui->lineEdit_2->text()=="")
    {
        QMessageBox::information(this,tr("提示"),tr("请填写您的酒店密钥！"),QMessageBox::Ok);
    }
    else
    {
        QString hotelname=ui->lineEdit->text();
        emit send(hotelname);
        mod->show();  //此处不能再重新定义一个modifyhotel界面！！
    }
}
