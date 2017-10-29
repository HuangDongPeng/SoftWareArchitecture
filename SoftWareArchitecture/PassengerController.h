#include "Passenger.h"
class PassengerController
{
public:
	PassengerController();
	~PassengerController();
	void addAPassenger(CString username, Passenger aPassenger);
	void updateAPassenger(CString username, Passenger aPassenger);
	void delAPassenger(CString username, int index);
};

