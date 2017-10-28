#include "stdafx.h"
#include "UserDA.h"
User aUser;
sql::mysql::MySQL_Driver* UserDA::driver = 0;
Connection* UserDA::conn = 0;
sql::Statement*  UserDA::stat = 0;
CString  UserDA::name = 0, UserDA::password = 0, UserDA::idCard = 0, UserDA::tel = 0,UserDA::username = 0;

//Connection* UserDA::initialize()
//{
//	driver = sql::mysql::get_mysql_driver_instance();
//	conn = driver->connect("localhost:3306", "root", "302017");
//	return conn;
//}
//
//void UserDA::terminate()
//{
//	stat->close();
//	conn->close();	
//}
//
//void UserDA::addAUser(User aUser)
//{
//	UserDA::initialize();
//	name = aUser.getName();
//	password = aUser.getPassword();
//	tel = aUser.getTel();
//	idCard = aUser.getIdCard();
//	username = aUser.getUsername();
//	stat = conn->createStatement();
//	stat->execute("set names 'gbk'");
//	stat->execute("USE ticketsystem");
//	string sql;
//	//sprintf(sql, "INSERT INTO usertable (username,password,name,tel,idCard) values (%s,%s,%s,%s)", username,password,name,tel,idCard);
//	sql = "INSERT INTO usertable (username,password,name,tel,idCard) values ('" + username + "','" + password + "','" + name + "','" + idCard + "','" + tel + "') ";
//	stat->executeUpdate(sql);
//	UserDA::terminate();
//}
//
//void UserDA::deleteAUser(CString username)
//{
//	UserDA::initialize();
//	stat = conn->createStatement();
//	stat->execute("set names 'gbk'");
//	stat->execute("USE ticketsystem");
//	string sql= "DELETE FROM usertable WHERE username = '"+username+"'";
//	stat->executeUpdate(sql);  
//	UserDA::terminate();
//}
//
//void UserDA::update(User aUser)
//{
//	UserDA::initialize();
//	stat = conn->createStatement();
//	stat->execute("set names 'gbk'");
//	stat->execute("USE ticketsystem");	
//	name = aUser.getName();
//	password = aUser.getPassword();
//	tel = aUser.getTel();
//	idCard = aUser.getIdCard();
//	char *sql;
//	//sprintf(sql, "UPDATE usertable SET username = %s,password = %s,name = %s,tel = %s,idCard = %s", (char *)username.GetBuffer(0), (char *)password.GetBuffer(0), (char *)name.GetBuffer(0), (char *)tel.GetBuffer(0), (char *)idCard.GetBuffer(0));
//	stat->executeUpdate(sql);
//	UserDA::terminate();
//}
//
//User UserDA::find(CString username)
//{
//	UserDA::initialize();
//	stat = conn->createStatement();
//	stat->execute("set names 'gbk'");
//	stat->execute("USE ticketsystem");
//	char *sql;
//	//sprintf(sql, "SELECT username,password,name,tel,idcard FROM usertable WHERE username = %s", (char *)username.GetBuffer(0));
//	ResultSet *rs = stat->executeQuery(sql);
//	bool getIt = rs->next();
//	if (getIt) {
//		username = (string)(rs->getString(1));
//		password = (string)(rs->getString(2));
//		name = (string)(rs->getString(3));
//		idCard = (string)(rs->getString(4));
//		tel = (string)(rs->getString(5));
//	}
//	rs->close();
//	UserDA::terminate();
//	return User(username,password,name,idCard,tel);
//}

UserDA::UserDA()
{
}


UserDA::~UserDA()
{
}
