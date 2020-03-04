#include "regdialog.h"
#include "ui_regdialog.h"
#include"logindialog.h"
#include"all_headers.h"
#include"data_object.h"
regdialog::regdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regdialog)
{
    ui->setupUi(this);
    setWindowTitle("注册页");
    QPixmap pixmap = QPixmap(":/Image/timg.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
}

regdialog::~regdialog()
{
    delete ui;
}

void regdialog::on_pushButton_clicked()
{
    if (ui->namelineEdit->text() == "" || ui->pwdlineEdit->text() == "" || ui->repwdlineEdit->text() == "")
    {
        QMessageBox::warning(this, tr("提示"),tr("信息填写不完整！"));
        return;
    }
    else if (ui->pwdlineEdit->text() != ui->repwdlineEdit->text())
    {
        QMessageBox::warning(this, tr("提示"), tr("两次密码输入不一致！"));
        return;
    }
    else if(ui->checkBox->isChecked()==true&&ui->checkBox_2->isChecked()!=true)
    {
        customer c;
        c.set_sid(ui->namelineEdit->text());
        c.set_pwd(ui->pwdlineEdit->text());
        qDebug()<<c.get_sid()<<c.get_pwd();
        c.save_database_reg();
        QMessageBox::information(this, tr("提示"),tr("注册完毕！"));
    }
    else if(ui->checkBox->isChecked()!=true&&ui->checkBox_2->isChecked()==true)
    {
        adminer a;
        a.set_sid(ui->namelineEdit->text());
        a.set_pwd(ui->pwdlineEdit->text());
        a.save_database_reg();
        QMessageBox::information(this, tr("提示"),tr("注册完毕！"));
    }
    else if((ui->checkBox->isChecked()!=true&&ui->checkBox_2->isChecked()!=true))
    {
        QMessageBox::warning(this, tr("提示"), tr("请选择您要注册的身份！"));
        return;
    }
    this->close();
    loginDialog *log=new loginDialog;
    log->show();
}
void regdialog::on_returnBtn_clicked()
{
    this->close();
    loginDialog *log = new loginDialog;
    log->show();
}
