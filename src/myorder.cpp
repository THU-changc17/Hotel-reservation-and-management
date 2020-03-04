#include "myorder.h"
#include "ui_myorder.h"
#include"all_headers.h"
#include"data_object.h"
myorder::myorder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myorder)
{
    ui->setupUi(this);
    setWindowTitle("订单信息");
    QPixmap pixmap = QPixmap(":/Image/timg.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
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
    QSqlQuery query;
    query.exec("select * from myorder");   //进行订单信息初始化
    while(query.next())
    {
        idcardlist<<query.value(0).toString();
        namelist<<query.value(1).toString();
        phonenumlist<<query.value(2).toString();
        hotelnamelist<<query.value(3).toString();
        roomnumlist<<query.value(4).toString();
        timelist<<query.value(5).toString();
        statelist<<query.value(6).toString();
    }
}

myorder::~myorder()
{
    delete ui;
}
void myorder::on_searchBtn_clicked()
{
    ui->tableWidget->clearContents();
    QString idcard=ui->lineEdit_3->text();
    if(idcard=="")
    {
        QMessageBox::warning(this, tr("提示"),tr("请填写您的个人信息！"));
    }
    else
    {
        int i=0;
        int rowIndex=0;
        int j=0;
        int k=0;
        for(i=0;i!=idcardlist.size();i++)  //将酒店初始化的值赋给表格
        {
            if(idcardlist.at(i)==idcard)
            {
                rowIndex++;
                ui->tableWidget->setRowCount(rowIndex);
                ui->tableWidget->setItem(j,k,new QTableWidgetItem(idcardlist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(namelist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(phonenumlist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(hotelnamelist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(roomnumlist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(timelist.at(i)));
                ui->tableWidget->setItem(j,++k,new QTableWidgetItem(statelist.at(i)));
                j++;
                k=0;
            }
        }
    }
}

void myorder::on_submitBtn_clicked()
{
    QString time=ui->lineEdit_4->text();
    QString hotelname=ui->lineEdit_5->text();
    QString evaluation=ui->lineEdit_6->text();
    QString idcard=ui->lineEdit_3->text();
    if(time==""||hotelname==""||evaluation=="")
    {
        QMessageBox::information(this,tr("提示"),tr("请填写完整信息！"),QMessageBox::Ok);
    }
    else
    {
        int i=0;
        int len=idcardlist.size();
        for(i=0;i<len;i++)
        {
            if(timelist.at(i)==time&&idcardlist.at(i)==idcard)
            {
                QString state=statelist.at(i);
                if(state=="已入住"||state=="已退房")
                {
                    hotel h;
                    h.load_database_name(hotelname);
                    QString score=h.get_evaluation();
                    QString id=h.get_id();
                    float nscore=(score.toFloat()*3+evaluation.toFloat())/4;     //取原始值乘以3加上此次评分做平均
                    QString newevaluation=QString::number(nscore,'f',1);      //保留一位小数
                    QSqlQuery query;
                    query.exec(QString(" update myHotelInFR set evaluation = " + newevaluation + " where id='%1' ").arg(id));
                    QMessageBox::information(this,tr("提示"),tr("您已评分成功！"),QMessageBox::Ok);
                }
                else
                {
                    QMessageBox::information(this,tr("提示"),tr("您尚未入住，目前不开放评价！"),QMessageBox::Ok);
                }
            }
          }
    }
}

void myorder::on_remoneyBtn_clicked()
{
    QString time=ui->lineEdit->text();
    QString idcard=ui->lineEdit_3->text();
    if(idcard==""||time=="")
    {
        QMessageBox::warning(this, tr("提示"),tr("请填写必要的订单信息！"));
    }
    else
    {
        int i=0;
        while(timelist[i]!=time||idcardlist[i]!=idcard)
        {
            i++;
        }
        if(statelist[i]=="已入住"||statelist[i]=="已退房")
        {
            QMessageBox::warning(this, tr("提示"),tr("您已入住此房间，不可退款！"));
        }
        else
        {
            QMessageBox::StandardButton reply;
            reply=QMessageBox::question(this, "提示", "确定退款？退款后订单将失效！", QMessageBox::Yes | QMessageBox::No);
            if(reply==QMessageBox::Yes)
            {
                int i=0;
                int len=idcardlist.size();
                for(i=0;i<len;i++)
                {
                    if(timelist.at(i)==time&&idcardlist.at(i)==idcard)
                    {
                        statelist[i]="申请退款中";
                        QSqlQuery query;
                        query.exec(QString("update myorder set state= '申请退款中' where time = '%1' and  idcard = '%2' ").arg(time).arg(idcard));
                        QMessageBox::information(this,tr("提示"),tr("您已申请退款，请等待酒店方审核！"),QMessageBox::Ok);
                    }
                }
            }
            else{}
        }
    }
}

void myorder::on_detBtn_clicked()
{
    QString time=ui->lineEdit_2->text();
    QString idcard=ui->lineEdit_3->text();
    if(idcard==""||time=="")
    {
        QMessageBox::warning(this, tr("提示"),tr("请填写必要的订单信息！"));
    }
    else
        {
            QSqlQuery query;
            QMessageBox::StandardButton reply;
            reply=QMessageBox::question(this, "提示", "确定删除此订单？删除后订单无效，如未入住可申请退款", QMessageBox::Yes | QMessageBox::No);
            if(reply==QMessageBox::Yes)
            {
                int i=0;
                int len=idcardlist.size();
                for(i=0;i<len;i++)
                {
                    if(timelist.at(i)==time&&idcardlist.at(i)==idcard)
                    {
                        QString roomnum=roomnumlist.at(i);
                        QString hotelname=hotelnamelist.at(i);
                        QString state=statelist.at(i);
                        hotel h;
                        h.load_database_name(hotelname);
                        QString ideaname=h.get_id();
                        idcardlist.removeAt(i);
                        namelist.removeAt(i);
                        phonenumlist.removeAt(i);
                        hotelnamelist.removeAt(i);
                        roomnumlist.removeAt(i);
                        timelist.removeAt(i);
                        statelist.removeAt(i);
                        if(state=="已入住")
                        {
                            QMessageBox::information(this,tr("提示"),tr("您尚未退房，不可删除订单！"),QMessageBox::Ok);

                        }
                        else     //已预订强行删除订单，订单无效不予退款
                        {
                             query.exec(QString(" delete from myorder where time = '%1' and idcard = '%2' ").arg(time).arg(idcard));
                             query.exec(QString(" update " + ideaname + " set message= '未预订' where num = '%1' ").arg(roomnum));
                             QMessageBox::information(this,tr("提示"),tr("订单已成功删除！"),QMessageBox::Ok);
                        }
                    }
                }
            }
            else{}
        }

}
