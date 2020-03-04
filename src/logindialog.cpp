#include "logindialog.h"
#include "ui_logindialog.h"
#include"widget.h"
#include"all_headers.h"
#include"regdialog.h"
#include<QSqlQuery>
#include"checkindialog.h"
#include"createhotel.h"
#include"platform.h"
loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    setAttribute(Qt::WA_DeleteOnClose);
    ui->setupUi(this);
    setWindowTitle(tr("登录页"));
    QPixmap pixmap = QPixmap(":/Image/timg.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
    ui->loginlineEdit->setFocus();
    ui->pushButton_2->setDefault(true);
    QObject::connect(ui->pwdlineEdit,SIGNAL(returnPressed()),this,SLOT(on_pushButton_2_clicked()));
}
loginDialog::~loginDialog()
{
    delete ui;
}

void loginDialog::on_quitBtn_clicked()
{
    this->close();
}

void loginDialog::on_regBtn_clicked()
{
    this->close();
    regdialog *reg = new regdialog;
    reg->show();
}

void loginDialog::on_pushButton_clicked()
{
    platform *p=new platform();
    if(ui->lineEdit->text()=="guanli")
    {
        p->show();
        this->close();
    }
    else
    {
        QMessageBox::information(this,tr("提示"),tr("您没有管理员权限！"),QMessageBox::Ok);
    }
}

void loginDialog::on_pushButton_2_clicked()
{
    QString sid=ui->loginlineEdit->text();
    QString pwd=ui->pwdlineEdit->text();
    if(ui->loginlineEdit->text().isEmpty()||
       ui->pwdlineEdit->text().isEmpty())
    {
        QMessageBox::information(this,tr("提示"),tr("用户信息不完整"),QMessageBox::Ok);
        return;
    }
    if(ui->checkBox->isChecked()!=true&&ui->checkBox_2->isChecked()!=true)
    {
        QMessageBox::information(this,tr("提示"),tr("请选择您的身份！"),QMessageBox::Ok);
        return;
    }
    if(ui->checkBox->isChecked()==true&&ui->checkBox_2->isChecked()!=true)
    {
        customer c;
        c.set_sid(sid);
        c.set_pwd(pwd);
        if(c.load_database(sid,pwd))
        {
            checkindialog *ch=new checkindialog;
            ch->show();
            this->close();
        }
        else
        {
            QMessageBox::information(this,tr("提示"),tr("用户名或密码错误"),QMessageBox::Ok);
            ui->loginlineEdit->clear();
            ui->pwdlineEdit->clear();
            ui->loginlineEdit->setFocus();
        }
    }
     if(ui->checkBox->isChecked()!=true&&ui->checkBox_2->isChecked()==true)
     {
         adminer a;
         a.set_sid(sid);
         a.set_pwd(pwd);
         if(a.load_database(sid,pwd))
         {
             createhotel *h=new createhotel;
             h->show();
             this->close();
         }
         else
         {
             QMessageBox::information(this,tr("提示"),tr("用户名或密码错误"),QMessageBox::Ok);
             ui->loginlineEdit->clear();
             ui->pwdlineEdit->clear();
             ui->loginlineEdit->setFocus();
          }
      }
     if(ui->checkBox->isChecked()==true&&ui->checkBox_2->isChecked()==true)
     {
         QMessageBox::information(this,tr("提示"),tr("请确定您的身份！"),QMessageBox::Ok);
     }
}

