#include <string>
#include "TeenageRide.h"
using namespace std;

class Viking : public TeenageRide
{
	public:
 		Viking();							// Default Constructor
 		Viking(string, int);				// Constructor
 		virtual void showInfo() const;		// showInfo Method to show attributes
};
