#include "stdafx.h"
#include "User.h"


User::User()
{
}

User::User(CString name, CString password, CString idCard, CString tel) :
	name(name), password(password), idCard(idCard), tel(tel)
{
}


User::~User()
{
}

bool User::addAPassenger(Passenger & passenger)
{
	return false;
}

bool User::delAPassenger(int index)
{
	return false;
}

bool User::updateAPassenger(int index, Passenger & passenger)
{
	return false;
}

bool User::buyATicket(Ticket & ticket)
{
	return false;
}

bool User::updateATicket(Ticket & ticket, int index)
{
	return false;
}

bool User::refundATicket(int index)
{
	return false;
}
