#include "stdafx.h"
#include "Ticket.h"


Ticket::Ticket(CString origin, CString destination, CString trainID, float price, bool isChanged = false) :
	origin(origin), destination(destination), trainID(trainID), price(price), isChanged(isChanged)
{
}

Ticket::Ticket()
{
}


Ticket::~Ticket()
{
}
