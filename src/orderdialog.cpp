#include "orderdialog.h"
#include "ui_orderdialog.h"
#include"checkindialog.h"
#include"data_object.h"
orderdialog::orderdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::orderdialog)
{
    ui->setupUi(this);
    setWindowTitle("预订界面");
    QPixmap pixmap = QPixmap(":/Image/timg.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
}
orderdialog::~orderdialog()
{
    delete ui;
}
void orderdialog::receive(QString str)
{
    ui->label_7->setText(QString("%1").arg(str));
    QString hotelname=str;
    hotel h;
    h.load_database_name(hotelname);
    QString ideaname=h.get_id();
    model=new QSqlTableModel(this);
    model->setTable(ideaname);
    ui->tableView->verticalHeader()->hide();
    model->select();
    //设置编辑模式
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可编辑
    ui->tableView->setSelectionMode( QAbstractItemView::SingleSelection);//设置选中单个
    ui->tableView->setModel(model);
}
void orderdialog::on_pushButton_clicked()
{
    QString name=ui->lineEdit->text();
    QString idcard=ui->lineEdit_2->text();
    QString phonenumber=ui->lineEdit_3->text();
    QString roomnum=ui->lineEdit_4->text();
    QString hotelname=ui->label_7->text();
    QString time=ui->dateEdit->text();
    hotel h;
    h.load_database_name(hotelname);
    QString ideaname=h.get_id();
    if(idcard.size()!=6||phonenumber.size()!=11)
    {
        QMessageBox::information(this,tr("提示"),tr("用户信息错误！"),QMessageBox::Ok);
    }
    if(time==""||name==""||idcard==""||phonenumber==""||roomnum==""||hotelname=="")
    {
        QMessageBox::information(this,tr("提示"),tr("填写信息不完整！"),QMessageBox::Ok);
    }
    if(ui->checkBox->isChecked()!=true)
    {
        QMessageBox::information(this,tr("提示"),tr("请确认您的订单再提交！"),QMessageBox::Ok);
    }
    if(idcard.size()==6&&phonenumber.size()==11&&time!=""&&name!=""&&idcard!=""&&phonenumber!=""&&roomnum!=""&&hotelname!=""&&ui->checkBox->isChecked()==true)
    {
        QSqlQuery query;
        query.exec(QString(" update " + ideaname + " set message= '已预订' where num = '%1' ").arg(roomnum));
        order ord(name,idcard,phonenumber,roomnum,hotelname,time);
        ord.save_database();
        QMessageBox::information(this,tr("提示"),tr("您已成功提交订单！"),QMessageBox::Ok);
    }
}
