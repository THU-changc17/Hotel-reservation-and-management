#include "data_object.h"
#include"connection.h"
#include"all_headers.h"
#include"regdialog.h"
client_user::client_user(){}
client_user::client_user(const QString &nsid,const QString &npwd)
{
    sid=nsid;
    pwd=npwd;
}
QString client_user::get_sid()const
{
    return sid;
}
QString client_user::get_pwd()const
{
    return pwd;
}
void  client_user::set_sid(const  QString &nsid)
{
    sid=nsid;
}
void  client_user::set_pwd(const  QString &npwd)
{
    pwd=npwd;
}
void client_user::load_database(const QString &nsid)
{
    QSqlQuery query;
    query.exec(QString("select * from user where sid='%1'").arg(nsid));
    query.next();
    sid=query.value(0).toString();
    pwd=query.value(1).toString();
    return;
}
void customer::save_database_reg()const
{
        QSqlQuery query;
        query.exec("select sid from customer where sid='" + sid + "';");
        if (query.next())
        {
            QMessageBox fail(QMessageBox::Critical, QStringLiteral("注册失败"), QStringLiteral("该用户已经存在！"));
            fail.setButtonText(QMessageBox::Ok, QStringLiteral("确定"));
            fail.exec();
        }
        else
        {
            query.prepare("insert into customer (sid,pwd)"
                           "values(?,?)");
            query.addBindValue(sid);
            query.addBindValue(pwd);
            query.exec();
         }
}
void adminer::save_database_reg()const
{
        QSqlQuery query;
        query.exec("select sid from adminer where sid='" + sid + "';");
        if (query.next())
        {
            QMessageBox fail(QMessageBox::Critical, QStringLiteral("注册失败"), QStringLiteral("该用户已经存在！"));
            fail.setButtonText(QMessageBox::Ok, QStringLiteral("确定"));
            fail.exec();
        }
        else
        {
            query.prepare("insert into adminer (sid,pwd)"
                           "values(?,?)");
            query.addBindValue(sid);
            query.addBindValue(pwd);
            query.exec();
        }
}
bool customer::load_database(const QString &nsid,const QString &npwd)const
{
    QSqlQuery query;
    query.exec(QString("select * from customer where sid='%1' and pwd = '%2' ").arg(nsid).arg(npwd));
    if(query.next())
        return true;
    else
        return false;
}
bool adminer::load_database(const QString &nsid,const QString &npwd)const
{
    QSqlQuery query;
    query.exec(QString("select * from adminer where sid='%1' and pwd = '%2'").arg(nsid).arg(npwd));
    if(query.next())
        return true;
    else
        return false;
}
void customer::set_sid(const QString &nsid)
{
    sid=nsid;
}
void customer::set_pwd(const QString &npwd)
{
    pwd=npwd;
}
QString customer::get_pwd()const
{
    return pwd;
}
QString customer::get_sid()const
{
    return sid;
}
void adminer::set_sid(const QString &nsid)
{
    sid=nsid;
}
void adminer::set_pwd(const QString &npwd)
{
    pwd=npwd;
}
QString adminer::get_pwd()const
{
    return pwd;
}
QString adminer::get_sid()const
{
    return sid;
}
hotel::hotel(){}
hotel::hotel(QString nid, QString nname, QString nstar, QString ncity, QString narea, QString nevaluation)
{
    id=nid;
    name=nname;
    star=nstar;
    city=ncity;
    area=narea;
    evaluation=nevaluation;
}
QString hotel::get_id()const
{
    return id;
}
QString hotel::get_name()const
{
    return name;
}
QString hotel::get_star()const
{
    return star;
}
QString hotel::get_city()const
{
    return city;
}
QString hotel::get_area()const
{
    return area;
}
QString hotel::get_evaluation()const
{
    return evaluation;
}

void hotel::load_database(QString nid)
{
        QSqlQuery query;
        query.exec(QString("select * from myHotelInFR where id='%1'").arg(nid));
        query.next();
        id=query.value(0).toString();
        name=query.value(1).toString();
        star=query.value(2).toString();
        city=query.value(3).toString();
        area=query.value(4).toString();
        evaluation=query.value(5).toString();
        return;
}
void hotel::load_database_name(QString nname)
{
    QSqlQuery query;
    query.exec(QString("select * from myHotelInFR where name='%1'").arg(nname));
    query.next();
    id=query.value(0).toString();
    name=query.value(1).toString();
    star=query.value(2).toString();
    city=query.value(3).toString();
    area=query.value(4).toString();
    evaluation=query.value(5).toString();
    return;
}
void hotel::save_database()const
{
        QSqlQuery query;
        query.prepare(" insert into myHotelInFR (id,name,star,province,area,evaluation) "
        "values (?,?,?,?,?,?)");
        query.addBindValue(id);
        query.addBindValue(name);
        query.addBindValue(star);
        query.addBindValue(city);
        query.addBindValue(area);
        query.addBindValue(evaluation);
        query.exec();
        return;
}
linkedlist::linkedlist(){}
struct room* linkedlist::createlist(QString hotelname)   //对数据库已有数据初始化，并保存在链表结构
{
       room *p,*q;
       head=p=q=NULL;
       QSqlQuery query;
       query.exec(QString("select * from myHotelInFR where name='%1'") .arg(hotelname));
       query.next();
       QString cmd=query.value(0).toString();
       QString str=" select * from "+cmd;
       query.exec(str);
       while(query.next())
       {
           p=new room;
           p->num=query.value(0).toString();
           p->roomtype=query.value(1).toString();
           p->price=query.value(2).toString();
           p->message=query.value(3).toString(); //初始化已经创建的数据
           if(head==NULL)
               head=p;
           else
               q->next=p;
           q=p;
       }
       if(head!=NULL)  q->next=NULL;
       return head;
}
void linkedlist::display(struct room *head,QString hotelname)
{
    room *p;
    p=head;
    while(p!=NULL)
    {
        qDebug()<<p->num<<p->roomtype<<p->price<<p->message;
        p=p->next;
    }
    return ;
}
room * linkedlist::get_head()
{
    return head;
}
room * linkedlist::add(QString nnum,QString nroomtype,QString nprice,QString nmessage,QString hotelname)   //将结点按照房间号顺序插入链表
{
    room* pnode ;      //待插入新节点
    room *p;
    room *q;
    p=new room;
    q=new room;
    pnode=new room;
    pnode->num = nnum;
    pnode->roomtype=nroomtype;
    pnode->price=nprice;
    pnode->message=nmessage;
    if (head ==NULL)
    {
        head= pnode;
        return head;
    }
    if (nnum < head->num)   //将nnum插入，成为新的头节点
    {
        pnode->next = head; //将pnode结点和原来的头结点联系起来
        head=pnode;         //pnode成为了新的头结点
        return head;
    }
    q=head;
    p=head->next;
    while (p != NULL)
    {
        if (nnum < p->num)
            break;
        else
        {
           p=p->next;
           q=q->next;
        }
    }
    pnode->next = p;
    q->next = pnode;
    return head;
}
room * linkedlist::delet(QString nnum,QString hotelname)   //删除客房信息
{
    room *p,*q;
    p= new room;
    q= new room;
    if(head==NULL)  return head;
    p=head;
    while((p!=NULL)&&(p->num!=nnum))
    {
        q=p;
        p=p->next;
    }
    if((p!=NULL)&(p->num==nnum))
    {
        if(p==head)
        {
            head=p->next;
        }
        else
            q->next=p->next;
        free(p);
    }
    return head;
}
QString linkedlist::search(room *head, QString nnum)  //在链表中根据房间号确定房间状态
{
    room *p;
    p=new room;
    p=head;
    while(p!=NULL)
    {
        if(p->num==nnum)
        {
            return (p->message);
        }
        else
            p=p->next;
    }
}
order::order(){}
order::order(QString nname, QString nidcard, QString nphonenumber, QString nroomnum, QString nhotelname, QString ntime)
{
    name=nname;
    idcard=nidcard;
    phonenumber=nphonenumber;
    roomnum=nroomnum;
    hotelname=nhotelname;
    time=ntime;
}
QString order::get_name()const
{
    return name;
}
QString order::get_idcard()const
{
    return idcard;
}
QString order::get_phonenumber()const
{
    return phonenumber;
}
QString order::get_roomnum()const
{
    return roomnum;
}
QString order::get_hotelname()const
{
    return hotelname;
}
QString order::get_time()const
{
    return time;
}
void order::save_database()const
{
    QSqlQuery query;
    query.prepare(" insert into myorder(idcard,name,phonenumber,hotelname,roomnum,time,state) "
    "values (?,?,?,?,?,?,?)");
    query.addBindValue(idcard);
    query.addBindValue(name);
    query.addBindValue(phonenumber);
    query.addBindValue(hotelname);
    query.addBindValue(roomnum);
    query.addBindValue(time);
    query.addBindValue("已预订");
    query.exec();
}
plat::plat(){}
plat::plat(QString nphone, QString nname, QString nstar, QString ncity, QString narea, QString nstate)
{
    phone=nphone;
    name=nname;
    star=nstar;
    city=ncity;
    area=narea;
    state=nstate;
}
void plat::save_database()const
{
            QSqlQuery query;
            query.prepare("insert into plcheck(phone,name,star,city,area,state)values(?,?,?,?,?,?);");  //新建表，保存到数据库
            query.addBindValue(phone);
            query.addBindValue(name);
            query.addBindValue(star);
            query.addBindValue(city);
            query.addBindValue(area);
            query.addBindValue(state);
            query.exec();
}
