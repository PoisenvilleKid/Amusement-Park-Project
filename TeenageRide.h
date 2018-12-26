#include <string>
#include "ParkRide.h"
#ifndef TeenageRide_h
#define TeenageRide_h
using namespace std;


class TeenageRide : public ParkRide
{
	private:
 		static int numOfTeenageRides;			// Counter to count all of the number of Teen rides we create.
 		int minHeight;							// Variable that dictates the minimum heioght of the Teens that can ride a certain ride.
 		
	public:
 		TeenageRide();							// Default Constructor thats called whenever we create a new ChildRide.
 		TeenageRide(string, int);					// Constructor that stores the name of the TeenageRide, and Minimum Height we can use.
 		static int getNumOfTeenageRides();		// Method that stores the number of Teenage rides we created. 
 		int getMinHeight() const;				// Method that stores the Minimum Height can be to ride a certain ride
 		virtual void restrictions() const;		// Method that prints the restrictions for that certain Ride. Can be changed since its a virtual method.
 		virtual void showInfo() const = 0;		// Method that prints the information for that Ride.
};
#endif
