#include "stdafx.h"
#include "UserController.h"


void UserController::addAUser(User aUser)
{
	User::addAUser(aUser);
}

bool UserController::signIn(CString username, CString password)
{
	User aUser = User::getUser(username);
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

User UserController::getUser(CString username) {
	return User::getUser(username);
}