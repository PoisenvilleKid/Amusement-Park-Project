#include <string>
#ifndef ParkRide_h
#define ParkRide_h
using namespace std;

class ParkRide
{
	private:
 		static int numOfParkRides;					// variable to Keep Track of The Total Number Of Rides we create.
 		string rideName;							// variable to store the name of a specific ParkRide Ride.
	public:
		ParkRide();									// Default Constructer of a ParkRide Ride.
 		ParkRide(string);							// Constructer that will take in the name of the ParkRide Ride.
 		static int getNumOfParkRides();				// integer to keep track of the number of Park Rides we have.
 		string getRideName() const;					// String to return the Name of the ParkRide. *Cannot change any values*.
 		virtual void restrictions() const = 0;		// method that prints out the age and height restrictions of rides. Can be changed from derived classes because we declared it virtual.
 		virtual void showInfo() const = 0;			// method that prints out the information of each ride such as Type,name,Info,Rule. Can be changed in derived classes.

};
#endif
