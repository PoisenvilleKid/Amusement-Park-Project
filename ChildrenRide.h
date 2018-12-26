#include <string>
#include "ParkRide.h"
#ifndef ChildrenRide_h
#define ChildrenRide_h
using namespace std;

class ChildrenRide : public ParkRide
{
	private:
 		static int numOfChildrenRides;			// Counter to count all of the number of children rides we create.
 		int maxAge;								// Variable that dictates the maximum age of the child that can ride a certain ride.
 		
	public:
 		ChildrenRide();							// Default Constructor thats called whenever we create a new ChildRide.
 		ChildrenRide(string, int);				// Constructor that stores the name of the Childride, and Maximum age we can use.
 		static int getNumOfChildrenRides();		// Method that stores the number of children rides we created. 
 		int getMaxAge() const;					// Method that stores the Maximum age a child can be to ride a certain ride
 		virtual void restrictions() const;		// Method that prints the restrictions for that certain Ride. Can be changed since its a virtual method.
 		virtual void showInfo() const = 0;		// Method that prints the information for that Ride.
};
#endif
