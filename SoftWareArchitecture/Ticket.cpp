#include "stdafx.h"
#include "Ticket.h"
Ticket::Ticket(CString origin, CString destination, CString trainID, CString time, float price, bool isChanged = false) :
	origin(origin), destination(destination), trainID(trainID), time(time), price(price), isChanged(isChanged)
{
}

Ticket::Ticket()
{
}


Ticket::~Ticket()
{
}
