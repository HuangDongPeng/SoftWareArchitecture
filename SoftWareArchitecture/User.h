//”√ªß¿‡
#include <vector>
#include "Passenger.h"
using namespace std;
class User
{
private:
	CString name;
	CString password;
	CString idCard;
	vector<Passenger> Contact;
	CString tel;
	//vector<Ticket> orders;


public:
	User();
	~User();
	bool addAPassenger(Passenger &passenger);
	bool delAPassenger(int index);
	bool updateAPassenger(int index, Passenger &passenger);
};

