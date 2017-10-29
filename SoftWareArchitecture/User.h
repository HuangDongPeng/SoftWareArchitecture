#ifndef USER_H
#define USER_H

#include <vector>
#include "Passenger.h"
#include "Ticket.h"
//#include "UserDA.h"
using namespace std;
class User
{
private:
	CString username;
	CString name;
	CString password;
	CString idCard;
	vector<Passenger> contact;
	CString tel;
	vector<Ticket> orders;

public:
	User();
	User(CString username, CString password, CString name, CString idCard, CString tel);
	~User();
	CString getUsername(){ return username; };
	CString getName() { return name; };
	CString getPassword() { return password; };
	CString getIdCard() { return idCard;};
	CString getTel() { return tel;}
	static User getUser(CString username);
	static void addAUser(User aUser);
};

#endif
