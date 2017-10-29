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
	CString getTel() { return tel;};
	static bool signUp(User &user);
	static bool signIn(CString name, CString password);
	bool addAPassenger(Passenger &passenger);
	bool delAPassenger(int index);
	bool updateAPassenger(int index, Passenger &passenger);
	bool buyATicket(Ticket &ticket);
	bool updateATicket(Ticket &ticket, int index);
	bool refundATicket(int index);
	static User getUser(CString username);
};

#endif
