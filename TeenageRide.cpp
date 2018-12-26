#include "ParkRide.h"
#include "TeenageRide.h"
#include <iostream>



int TeenageRide::numOfTeenageRides = 0;												// Initialize the number of teenage rides we have to zero

TeenageRide::TeenageRide() : ParkRide()												// Default Constructor that Inherits from ParkRide
{
	TeenageRide::numOfTeenageRides++;												// Whenever we create a teenage ride we increment our counter by one
}

TeenageRide::TeenageRide(string nameOfRide, int heightMin) : ParkRide(nameOfRide)	// Constructor that brings in values and passes to ParkRide
{
	TeenageRide::numOfTeenageRides++;												// Whenever we create a teenage ride we increment our counter by one
	minHeight = heightMin;															// store the minimum height needed to ride the ride
}

TeenageRide::getNumOfTeenageRides()													// holds the number of teenageRides we create
{
	return numOfTeenageRides;														// returns the number of teenage rides we created
}

int TeenageRide::getMinHeight() const												// holds the minimum height 
{
	return minHeight;																// return the minimum height for that ride
}	

void TeenageRide::restrictions() const												// hold the restrictions for a ride
{
	cout << "Rule: minimum height : " << minHeight << "\n\n";						// Print out the restrictions, Teenage Rides have a height restriction
}

