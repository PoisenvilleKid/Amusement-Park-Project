#include "ChildrenRide.h"
#include "Carousel.h"
#include <iostream>
using namespace std;

Carousel::Carousel() : ChildrenRide()																	// ChildrenRide inherits whatever Value Carousel Recieves
{
	
}

Carousel::Carousel(string nameOfRide, int ageMax) : ChildrenRide(nameOfRide,ageMax) 					// ChildrenRide inherits whatever Value Carousel Recieves
{
	
}

void Carousel::showInfo() const																			// Method To print out the Attributes Of THe Carousel
{
	cout << "Carousel Type " << "\n";
	cout << "Name: " << ChildrenRide::getRideName() << " \n";	
	cout << "You may only be on the hourse for 5 minutes or face explusion from the park!" << "\n";
	ChildrenRide::resAmustrictions();
}
