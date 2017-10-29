#include "stdafx.h"
#include "User.h"
#include "UserDA.h"

User::User()
{
}

User::User(CString username, CString password, CString name, CString idCard, CString tel) :
	name(name), password(password), idCard(idCard), tel(tel),username(username)
{
}


User::~User()
{
}


User User::getUser(CString username) {
	return UserDA::find(username);
}

void User::addAUser(User aUser)
{
	UserDA::addAUser(aUser);
}
