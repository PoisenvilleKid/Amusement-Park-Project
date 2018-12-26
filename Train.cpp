#include "ChildrenRide.h"
#include "Train.h"
#include <iostream>
using namespace std;

Train::Train() : ChildrenRide()															// Default Constructor that inherits from Children Ride
{
	
}

Train::Train(string nameOfRide, int ageMax) : ChildrenRide(nameOfRide,ageMax)			// Constructor that stores the name and age max for a train ride
{
	
}

void Train::showInfo() const															// print out the information and restrictions for a train ride
{
	cout << "Train Type " << "\n";
	cout << "Name: " << ChildrenRide::getRideName() << " \n";
	cout << "You have to get off the train after 5 minutes!!!" << "\n";
	ChildrenRide::restrictions();
}
