#include "stdafx.h"
#include "UserDA.h"


Connection* UserDA::initialize()
{
	driver = sql::mysql::get_mysql_driver_instance();
	conn = driver->connect("localhost:3306", "root", "302017");
	return conn;
	//try
	//{
	//	driver = sql::mysql::get_mysql_driver_instance();
	//	conn = driver->connect("localhost:3306", "root", "302017");
	//	MessageBox(_T("连接成功"));
	//}
	//catch (...)
	//{
	//	MessageBox(_T("连接失败"));
	//}
	//sql::Statement* stat = conn->createStatement();
	//stat->execute("set names 'gbk'");
	//stat->execute("USE ticketsystem");
	//ResultSet *res;
	//res = stat->executeQuery("SELECT * FROM usertable");

	//while (res->next())
	//{
	//	string a = (string)(res->getString("name"));
	//	CString b;
	//	b = a.c_str();
	//	MessageBox(b);
	//	cout << "idcard:" << res->getString("idcard") << endl;
	//}
	//if (conn != 0)
	//{
	//	delete conn;
	//}
	//MessageBox(_T("1111"));
}

void UserDA::terminate()
{
	stat->close();
	conn->close();	
}

void UserDA::addAUser(User aUser)
{
	name = aUser.getName();
	password = aUser.getPassword();
	tel = aUser.getTel();
	idCard = aUser.getIdCard();
	stat->execute("set names 'gbk'");
	stat->execute("USE ticketsystem");
	char *sql;
	sprintf(sql, "INSERT INTO usertable(name,password,tel,idCard) values(%s,%s,%s,%s)", name, password, tel, idCard);
	stat->executeUpdate(sql);
}

void UserDA::deleteAUser(CString idCard)
{
	stat->execute("set names 'gbk'");
	stat->execute("USE ticketsystem");
	char *sql;
	sprintf(sql, "DELETE FROM usertable WHERE idcard = %s", idCard.GetBuffer(0));
	stat->executeUpdate(sql);  
}

void UserDA::update(User aUser)
{
	stat->execute("set names 'gbk'");
	stat->execute("USE ticketsystem");	
	name = aUser.getName();
	password = aUser.getPassword();
	tel = aUser.getTel();
	idCard = aUser.getIdCard();

}

UserDA::UserDA()
{
}


UserDA::~UserDA()
{
}
