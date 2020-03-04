#ifndef CONNECTION_H
#define CONNECTION_H
#include<QSqlDatabase>
#include"all_headers.h"
static bool connection()
{
       QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
       db.setHostName("localhost");
       db.setPort(3306);
       db.setUserName("root");
       db.setPassword("123456");
          db.setDatabaseName("work.db");
          if (!db.open()) {
              QMessageBox::critical(0, qApp->tr("Cannot open database"),
                  qApp->tr("Unable to establish a database connection."
                           ), QMessageBox::Cancel);
              return false;
          }
          QSqlQuery query(db);
          query.exec("create table user(sid varchar(20) primary key,"
                      "pwd varchar(20))");
          query.exec("insert into user values('chang', '123456')");
          query.exec("insert into user values('yuan', '1234')");

          query.exec("create table customer(sid varchar(20) primary key,"
                      "pwd varchar(20))");
          query.exec("insert into customer values('chang', '123456')");
          query.exec("create table adminer(sid varchar(20) primary key,"
                      "pwd varchar(20))");
          query.exec("insert into adminer values('yuan', '1234')");
          //酒店数据库基础配置
          query.exec("create table myHotelInFR(id varchar primary key,name varchar,star varchar,province varchar,area varchar,evaluation varchar)");
          query.exec("insert into myHotelInFR values('aaab','北京亚朵酒店','5','北京','朝阳区','4.5')");
          query.exec("insert into myHotelInFR values('aaac','北京欢寓酒店','3','北京','海淀区','4.6')");
          query.exec("insert into myHotelInFR values('aaad','北京赛特酒店','4','北京','朝阳区','4.9')");
          query.exec("insert into myHotelInFR values('aaae','北京祥达酒店','3','北京','海淀区','3.9')");
          query.exec("insert into myHotelInFR values('aaaf','北京云逸酒店','4','北京','顺义区','4.6')");
          query.exec("insert into myHotelInFR values('aaag','北京时光漫步酒店','4','北京','顺义区','3.9')");
          query.exec("insert into myHotelInFR values('aaah','北京京伦酒店','5','北京','海淀区','4.8')");
          query.exec("insert into myHotelInFR values('aaaq','北京丽景湾酒店','4','北京','朝阳区','4.7')");

          query.exec("insert into myHotelInFR values('aaai','上海宝安酒店','5','上海','浦东新区','4.3')");
          query.exec("insert into myHotelInFR values('aaaj','上海零点酒店','4','上海','浦东新区','3.5')");
          query.exec("insert into myHotelInFR values('aaak','上海云逸酒店','4','上海','浦东新区','4.7')");
          query.exec("insert into myHotelInFR values('aaal','上海云瑞酒店','3','上海','徐家汇地区','4.6')");
          query.exec("insert into myHotelInFR values('aaam','上海轻奢酒店','5','上海','杨浦区','4.6')");
          query.exec("insert into myHotelInFR values('aaan','上海亚朵酒店','3','上海','浦东新区','4.7')");
          query.exec("insert into myHotelInFR values('aaao','上海南泉酒店','3','上海','虹桥地区','4.8')");
          query.exec("insert into myHotelInFR values('aaap','上海源深酒店','4','上海','虹桥地区','4.6')");

          //以北京祥达酒店为例，建立酒店信息专属表
          query.exec("create table aaae(num varchar primary key,feature varchar,price varchar,message varchar)");
          query.exec("insert into  aaae values('101','单人间','300','已预订')");
          query.exec("insert into  aaae values('102','单人间','300','已入住')");
          query.exec("insert into  aaae values('103','双人间','500','已预订')");
          query.exec("insert into  aaae values('201','单人间','300','未预订')");
          query.exec("insert into  aaae values('202','多人间','600','未预订')");
          query.exec("insert into  aaae values('301','双人间','500','已预订')");
          query.exec("insert into  aaae values('302','多人间','600','已入住')");   //注：因祥达酒店仅作例子使用，删除数据库房间信息仍会被初始化，故测试软件删除房间信息功能时不可用


          query.exec("create table myorder(idcard varchar primary key,name varchar,phonenumber varchar,hotelname varchar,roomnum varchar,time varchar,state varchar)");
          query.exec("insert into myorder values('220123','李华','18743876361','北京祥达酒店','101','2018/8/1','已预订')");

          query.exec("create table plcheck(phone varchar primary key, name varchar,star varchar,city varchar,area varchar,state varchar)");
          return true;
}

#endif // CONNECTION_H
