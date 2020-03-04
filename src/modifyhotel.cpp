#include "modifyhotel.h"
#include "ui_modifyhotel.h"
#include "all_headers.h"
#include "hotelmanage.h"
#include"data_object.h"
#include<QHeaderView>
modifyhotel::modifyhotel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifyhotel)
{
    ui->setupUi(this);
    setWindowTitle("酒店信息修改");
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
}

modifyhotel::~modifyhotel()
{
    delete ui;
}
void modifyhotel::receive(QString str)
{
    ui->tableWidget->clearContents();
    ui->label_2->setText(QString("%1").arg(str));
    qDebug()<<ui->label_2->text();
    l.createlist(str);
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
        ui->tableWidget->setItem(i,++j,new QTableWidgetItem(p->message));  //将链表中的数据输出
        i++;
        j=0;
        p=p->next;
    }
}
void modifyhotel::on_addBtn_clicked()
{
    QString num=ui->lineEdit->text();
    QString roomtype=ui->lineEdit_2->text();
    QString price=ui->lineEdit_3->text();
    QString message="未预订";
    QString hotelname=ui->label_2->text();
    if(num!=""&&roomtype!=""&&price!="")
    {
        l.add(num,roomtype,price,message,hotelname);   //在链表中加入这个房间信息的结点
        hotel h;
        h.load_database_name(hotelname);
        QString id=h.get_id();      //获取酒店对应的id，将数据插入表，保存到数据库，避免数据丢失
        QSqlQuery query;
        QString cmd=" select * from "+id;    //如果酒店预先没有数据表，需要先创建
        query.exec(cmd);
        if(!query.next())
        {
            query.exec(" create table " + id + " (num varchar primary key,feature varchar,price varchar,message varchar)");
        }
        query.prepare(" insert into " + id + " (num,feature,price,message) values(?,?,?,?) ");
        query.addBindValue(num);
        query.addBindValue(roomtype);
        query.addBindValue(price);
        query.addBindValue(message);
        query.exec();
        QMessageBox::information(this,tr("提示"),tr("该房间已成功添加！"),QMessageBox::Ok);
    }
    else
    {
        QMessageBox::warning(this, tr("提示"),tr("信息填写不完整！"));
    }
}
void modifyhotel::on_modifyBtn_clicked()
{
    QString num=ui->lineEdit->text();
    QString roomtype=ui->lineEdit_2->text();
    QString price=ui->lineEdit_3->text();
    QString hotelname=ui->label_2->text();
    QString message=l.search(l.head,num);
    if(message=="已入住"||message=="已预订")
    {
        QMessageBox::warning(this, tr("提示"),tr("此房间正在被占用，现在不可修改！"));
    }
    else
    {
        l.delet(num,hotelname);
        hotel h;
        h.load_database_name(hotelname);
        QSqlQuery query;
        QString id=h.get_id();
        query.exec(QString(" delete from " + id + " where num = '%1' ").arg(num));
        l.add(num,roomtype,price,message,hotelname);
        query.prepare(" insert into "  +  id  +  " (num,feature,price,message) values(?,?,?,?) ");  //将信息保存到数据库
        query.addBindValue(num);
        query.addBindValue(roomtype);
        query.addBindValue(price);
        query.addBindValue(message);
        query.exec();
        QMessageBox::information(this,tr("提示"),tr("修改房间信息成功！"),QMessageBox::Ok);
    }
}
void modifyhotel::on_detBtn_clicked()
{
    QString num=ui->lineEdit->text();
    QString hotelname=ui->label_2->text();
    QString message=l.search(l.head,num);
    if(message!="未预订")
    {
        QMessageBox::warning(this, tr("提示"),tr("此房间正在被占用，现在不可删除！"));
    }
    else
    {
        l.delet(num,hotelname);
        hotel h;
        h.load_database_name(hotelname);
        QString id=h.get_id();
        QSqlQuery query;
        query.exec(QString(" delete from " + id + " where num = '%1' ").arg(num));
        QMessageBox::information(this,tr("提示"),tr("删除房间信息成功！"),QMessageBox::Ok);
    }
}
