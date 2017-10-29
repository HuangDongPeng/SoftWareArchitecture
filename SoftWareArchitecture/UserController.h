#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H


#include "User.h"
#include "UserDA.h"
class UserController
{
public:
	void addAUser(User aUser);
	bool signIn(CString username, CString password);
	UserController();
	~UserController();
};


#endif 