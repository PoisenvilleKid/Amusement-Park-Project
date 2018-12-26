#include "TeenageRide.h"
#include "RollerCoaster.h"
#include <iostream>
using namespace std;

RollerCoaster::RollerCoaster() : TeenageRide()															// RollerCoaster Constructor that inherits Teenage Ride
{
	
}

RollerCoaster::RollerCoaster(string nameOfRide, int minHeight) : TeenageRide(nameOfRide,minHeight)		// Whatever values pass through RollerCoaster TeenageRide holds as well
{
	
}

void RollerCoaster::showInfo() const																	// Prints out the Information and Restrictions for a RollerCoaster Ride
{
	cout << "RollerCoaster Type " << "\n";
	cout << "Name: " << TeenageRide::getRideName() << " \n";
	cout << "10 minutes of death defying drops like Dick Grayson... Only faster!!!!!!" << "\n";
	TeenageRide::restrictions();
}
