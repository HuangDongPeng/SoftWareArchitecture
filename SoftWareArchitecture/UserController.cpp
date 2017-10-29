#include "stdafx.h"
#include "UserController.h"


void UserController::addAUser(User aUser)
{
	UserDA::addAUser(aUser);
}

bool UserController::signIn(CString username, CString password)
{
	User aUser = UserDA::find(username);
	if (aUser.getPassword().IsEmpty())
		return false;
	else if (aUser.getPassword() == password)
		return true;
	else return false;
}

UserController::UserController()
{
}


UserController::~UserController()
{
}
