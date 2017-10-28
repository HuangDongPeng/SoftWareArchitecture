#include <iostream>
#include <map>
#include <string>
#include <memory>
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
	static User aUser;
	static sql::mysql::MySQL_Driver *driver;
	static sql::Connection *conn;
	static sql::Statement* stat;
	static CString name, password, idCard, tel;
public:
	static Connection *initialize();
	static void terminate();
	static void addAUser(User aUser);
	static void deleteAUser(CString idCard);
	static void update(User aUser);
	UserDA();
	~UserDA();
};

