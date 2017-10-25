#pragma once
class Ticket
{
private:
	CString origin;
	CString destination;
	CString trainID;
	float price;
	bool isChanged;
public:
	Ticket(CString origin, CString destination, CString trainID, float price, bool isChanged=false);
	Ticket();
	~Ticket();
};

