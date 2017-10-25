#pragma once
enum type {
	normal,
	student
};
class Passenger
{
private:
	CString name;
	CString idCard;
	type pType;
	CString studentCard;
	CString collegeName;
	CString grade;
public:
	Passenger();
	Passenger(CString name, CString idCard, type pType, CString studentCard = _T(""), CString collegeName = _T(""), CString grade = _T(""));
	~Passenger();
};

