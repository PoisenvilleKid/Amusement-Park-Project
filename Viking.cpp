#include "TeenageRide.h"
#include "Viking.h"
#include <iostream>
using namespace std;

Viking::Viking() : TeenageRide()															// Default constructor for a Viking Class
{
	
}

Viking::Viking(string nameOfRide, int minHeight) : TeenageRide(nameOfRide,minHeight)		// Constructor that stores the name and height requirement for a Viking ride
{
	
}

void Viking::showInfo() const																// Prints out the information and restrictions of a Viking Ride
{
	cout << "Viking Type " << "\n";
	cout << "Name: " << TeenageRide::getRideName() << " \n";
	cout << "Yo! you got 20 more minutes of earth shattering swaying thrill!!!!!!" << "\n";
	TeenageRide::restrictions();
}
