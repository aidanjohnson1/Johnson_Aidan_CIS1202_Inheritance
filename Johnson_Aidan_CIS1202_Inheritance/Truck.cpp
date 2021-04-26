#include "Truck.h"

//Constructors
Truck::Truck() { towingCapacity = 0; }
Truck::Truck(int towingCap) { towingCapacity = towingCap; }

//Setter function
void Truck::setTowCap(int towCap) {towingCapacity = towCap;}

//Getter function
int Truck::getTowCap() {return towingCapacity;}

//Display function
void Truck::displayTowCap() {
	displayInfo();

	std::cout << "Towing Capacity: " << towingCapacity << std::endl;
}