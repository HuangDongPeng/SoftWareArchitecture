//Œ¥ µœ÷
class Ticket
{
private:
	CString origin;
	CString destination;
	CString trainID;
	CString time;
	float price;
	bool isChanged;
public:
	Ticket(CString origin, CString destination, CString trainID, CString time,  float price, bool isChanged=false);
	bool buyATicket(Ticket &ticket);
	bool updateATicket(Ticket &ticket, int index);
	bool refundATicket(int index);
	Ticket();
	~Ticket();
};

