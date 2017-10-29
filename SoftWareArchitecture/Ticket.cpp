#include "stdafx.h"
#include "Ticket.h"
Ticket::Ticket(CString origin, CString destination, CString trainID, CString time, float price, bool isChanged) :
	origin(origin), destination(destination), trainID(trainID), time(time), price(price), isChanged(isChanged)
{
}

bool Ticket::buyATicket(Ticket & ticket)
{
	return false;
}

bool Ticket::updateATicket(Ticket & ticket, int index)
{
	return false;
}

bool Ticket::refundATicket(int index)
{
	return false;
}

Ticket::Ticket()
{
}


Ticket::~Ticket()
{
}
