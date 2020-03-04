#include "newhotel.h"
#include "ui_newhotel.h"
#include"all_headers.h"
#include"data_object.h"
newhotel::newhotel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newhotel)
{
    ui->setupUi(this);
    setWindowTitle("创建酒店");
    QPixmap pixmap = QPixmap(":/Image/timg.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
    p=new platform();
}

newhotel::~newhotel()
{
    delete ui;
}

void newhotel::on_pushButton_clicked()
{
    QString phone=ui->lineEdit_5->text();
    QString name=ui->lineEdit->text();
    QString star=ui->lineEdit_2->text();
    QString city=ui->lineEdit_3->text();
    QString area=ui->lineEdit_4->text();
    QString state="未审核";
    if(name==""||star==""||city==""
            ||area==""||phone=="")
    {
        QMessageBox::warning(this, tr("提示"), tr("填写信息不完整！"));
    }
    else if(ui->checkBox->isChecked()!=true)
    {
        QMessageBox::warning(this, tr("提示"), tr("请确认后再提交！"));
    }
    else
    {
        plat p(phone,name,star,city,area,state);
        p.save_database();
        QMessageBox::information(this,tr("提示"),tr("申请已提交，请等待管理员审核！"),QMessageBox::Ok);
    }
}
