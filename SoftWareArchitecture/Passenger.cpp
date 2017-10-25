#include "stdafx.h"
#include "Passenger.h"


Passenger::Passenger()
{
}

Passenger::Passenger(CString name, CString idCard, type pType, CString studentCard= _T(""), CString collegeName= _T(""), CString grade= _T("")) :
	name(name), idCard(idCard), pType(pType), studentCard(studentCard), collegeName(collegeName), grade(grade)
{

}


Passenger::~Passenger()
{
}
