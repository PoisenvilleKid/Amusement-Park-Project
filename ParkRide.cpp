#include "ParkRide.h"
using namespace std;

int ParkRide::numOfParkRides = 0;				// initialize the Total number of Rides to zero to start

ParkRide::ParkRide()							// Default Constructor of Park Rides
{
	ParkRide::numOfParkRides++;					// Everytime we create a ride we increment the total number of rides by one
	rideName = "Unintitialized ";				// In the Default COnstructor, If there is no Declaration of a name we simply list it as undefined
}

ParkRide::ParkRide(string nameOfRide)			// Constructor to take in the name of a ride
{
	numOfParkRides++;							// Everytime we create a ride we increment the total number of rides by one
	rideName = nameOfRide;						// Stores the name of a ride when we create one
}

ParkRide::getNumOfParkRides()					// When this method is called we must get the total number of rides we created
{
	return numOfParkRides;						// return the number of rides we have created
}

string ParkRide::getRideName() const			// Stores the name of a ride when ever we create a ride
{
	return rideName;							// returns the name of the ride that we created 
}




