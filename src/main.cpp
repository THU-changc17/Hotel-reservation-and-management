#include "widget.h"
#include <QApplication>
#include"logindialog.h"
#include"all_headers.h"
#include"data_object.h"
#include<connection.h>
#include<QTextCodec>
int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
   if(!connection())
   {
       return false;
   }
   loginDialog log;
   log.show();
   return a.exec();
}
