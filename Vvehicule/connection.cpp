#include "connection.h"
#include "QSqlDatabase"
connection::connection()
{

}
bool connection::createConnection(){
   bool test=false;
   QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
   db.setDatabaseName("test");
   db.setUserName("mohamed");
   db.setPassword("mohamed00");
   if(db.open())
test=true;
return test;
}
