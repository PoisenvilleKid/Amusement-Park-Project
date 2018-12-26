#include <string>
#include "ChildrenRide.h"
using namespace std;

class Train : public ChildrenRide
{
	public:
 		Train();							// Default Constructor
 		Train(string, int);					// Constructor
 		virtual void showInfo() const;		// showInfo Method to show attributes
};
