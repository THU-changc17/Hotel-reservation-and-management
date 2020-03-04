#include "photodialog.h"
#include "ui_photodialog.h"

photodialog::photodialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::photodialog)
{
    ui->setupUi(this);
    setWindowTitle("酒店照片预览");
    QPixmap pixmap = QPixmap(":/Image/timg.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
}

photodialog::~photodialog()
{
    delete ui;
}
