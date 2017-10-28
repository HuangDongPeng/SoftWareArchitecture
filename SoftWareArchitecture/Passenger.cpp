#include "stdafx.h"
#include "Passenger.h"
Passenger::Passenger()
{
}

Passenger::Passenger(CString name, CString idCard, type pType, CString studentCard, CString collegeName, CString grade) :
	name(name), idCard(idCard), pType(pType), studentCard(studentCard), collegeName(collegeName), grade(grade)
{

}


Passenger::~Passenger()
{
}
