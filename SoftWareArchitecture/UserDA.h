#ifndef USERDA_H
#define USERDA_H

#include <iostream>
#include <string>
#include "mysql_driver.h"
#include "mysql_connection.h"
#include "cppconn/driver.h"
#include "cppconn/statement.h"
#include "cppconn/prepared_statement.h"
#include "cppconn/metadata.h"
#include "cppconn/exception.h"
#include "User.h"
using namespace sql;
using namespace std;
class UserDA
{
private:
	static User UserDA::aUser;
	static sql::mysql::MySQL_Driver *driver;
	static Connection *conn;
	static sql::Statement* stat;
	static CString name, password, idCard, tel, username;
public:
	static Connection *initialize();
	static void terminate();
	static void addAUser(User aUser);
	static void deleteAUser(CString idCard);
	static void update(User aUser);
	static User find(CString idCard);
	UserDA();
	~UserDA();
};

#endif