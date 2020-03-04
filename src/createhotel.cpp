#include "createhotel.h"
#include "ui_createhotel.h"
#include"hotelmanage.h"
#include"newhotel.h"
createhotel::createhotel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createhotel)
{
    ui->setupUi(this);
    setWindowTitle("创建酒店");
    QPixmap pixmap = QPixmap(":/Image/timg.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
}

createhotel::~createhotel()
{
    delete ui;
}
void createhotel::on_createBtn_clicked()
{
    newhotel *n=new newhotel();
    n->show();
    this->close();
}
void createhotel::on_manageBtn_clicked()
{
    hotelmanage *h=new hotelmanage();
    h->show();
    this->close();
}
