#include <string>
#include "TeenageRide.h"
using namespace std;

class RollerCoaster : public TeenageRide
{
	public:
 		RollerCoaster();						// Default Constructor
 		RollerCoaster(string, int);				// Constructor
 		virtual void showInfo() const;			// showInfo Method to show attributes
};
