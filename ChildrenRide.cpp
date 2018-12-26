#include "ParkRide.h"
#include "ChildrenRide.h"
#include <iostream>


using namespace std;

int ChildrenRide::numOfChildrenRides = 0;											// intialize counter to keep track of Children Rides

ChildrenRide::ChildrenRide() : ParkRide()											// ChildrenRide Inherits every public function in ParkRide
{
	ChildrenRide::numOfChildrenRides++;												// Everytime a ChildrenRide attraction is created we increment the number of Children Rides we have
}

ChildrenRide::ChildrenRide(string nameOfRide, int ageMax) : ParkRide(nameOfRide)	// Constructor Brings in 2 values, while ParkRide gets the string
{
	ChildrenRide::numOfChildrenRides++;												// Everytime a Child attraction is created we increment the number of Children Rides we have
	maxAge = ageMax;																// Keep the value of the maximum age
}

ChildrenRide::getNumOfChildrenRides()												// Hold the Name of the child attraction
{
	return numOfChildrenRides;														// return the Name of the child attraction
}

int ChildrenRide::getMaxAge() const													// hold the max age
{
	return maxAge;																	// return the maximum age for that attraction
}

void ChildrenRide::restrictions() const												// Print whatever restrictions this ride has
{
	cout << "Rule: maximum age: " << maxAge << " \n\n";								// Children rides have an age restriction so we print whatever the age restriction is
}


