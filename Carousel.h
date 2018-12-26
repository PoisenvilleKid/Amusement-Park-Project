#include <string>
#include "ChildrenRide.h"
using namespace std;

class Carousel : public ChildrenRide
{
	public:
 		Carousel();							// Default Constructor of Carousel
 		Carousel(string, int);				// Constructor of Carousel to take in 2 values
 		virtual void showInfo() const;		// showInfo Method to show attributes
};
