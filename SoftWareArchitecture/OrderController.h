#include "Ticket.h"
class OrderController
{
public:
	OrderController();
	~OrderController();
	bool buyATicket(Ticket &ticket);
	bool updateATicket(Ticket &ticket, int index);
	bool refundATicket(int index);
};

