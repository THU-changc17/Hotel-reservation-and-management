#ifndef DATA_OBJECT_H
#define DATA_OBJECT_H
#include"all_headers.h"
#include"connection.h"
class client_user
{
private:
    QString sid,pwd;
public:
    explicit client_user();
    explicit client_user(const QString &nsid,const QString &npwd);
    virtual QString get_sid() const;
    virtual QString get_pwd() const;
    virtual void set_sid(const QString &nsid);   //名词前加n均表示new，用于赋值
    virtual void set_pwd(const QString &npwd);
    void load_database(const QString &sid);
};
class customer:public client_user
{
private:
    QString sid,pwd;
public:
    void set_sid(const QString &nsid);
    void set_pwd(const QString &npwd);
    QString get_sid() const;
    QString get_pwd() const;
    void save_database_reg()const;
    bool load_database(const QString &sid,const QString &pwd)const;
};
class adminer:public client_user
{
private:
    QString sid,pwd;
public:
    void set_sid(const QString &nsid);
    void set_pwd(const QString &npwd);
    QString get_sid() const;
    QString get_pwd() const;
    void save_database_reg()const;
    bool load_database(const QString &sid,const QString &pwd)const;
};
class hotel
{
private:
    QString id,name,star,city,area,evaluation;
public:
    explicit hotel();
    explicit hotel(QString nid,QString nname,QString nstar,QString ncity,QString narea,QString nevaluation);
    QString get_id()const;
    QString get_name()const;
    QString get_star()const;
    QString get_city()const;
    QString get_area()const;
    QString get_roomtype()const;
    QString get_price()const;
    QString get_evaluation()const;
    void load_database(QString nid);
    void load_database_name(QString nname);
    void save_database()const;
};
struct room
{
    QString num;
    QString roomtype;
    QString price;
    QString message;
    QString hotelname;
    struct room *next;
};
class linkedlist
{
public:
       linkedlist();
       int len;
       struct room data;
       struct room * add(QString nnum,QString nroomtype,QString nprice,QString nmessage,QString hotelname);
       struct room* createlist(QString hotelname);
       void display(struct room *head,QString hotelname);
       struct room * delet(QString nnum,QString hotelname);
       void save_database_reg(QString nnum);
       QString search(struct room *head,QString nnum);
       room* get_head();
       room *head;
};
class order
{
private:
    QString name,idcard,phonenumber,roomnum,hotelname,time;
public:
    explicit order();
    explicit order(QString nname,QString nidcard,QString nphonenumber,QString nroomnum,QString nhotelname,QString ndays);
    QString get_name()const;
    QString get_idcard()const;
    QString get_phonenumber()const;
    QString get_roomnum()const;
    QString get_hotelname()const;
    QString get_time()const;
    void save_database()const;

};
class plat
{
private:
    QString phone,name,star,city,area,state;
public:
    explicit plat();
    explicit plat(QString nphone,QString nname,QString nstar,QString ncity,QString narea,QString nstate);
    void save_database()const;
};
#endif // DATA_OBJECT_H
