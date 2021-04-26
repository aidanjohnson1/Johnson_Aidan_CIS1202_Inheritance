#include "Car.h"

//Constructors
Car::Car() { numDoors = 0;}
Car::Car(int doors) { numDoors = doors;}

//Setter funciton
void Car::setNumDoors(int doors) {numDoors = doors;}

//Getter function
int Car::getNumDoors() {return numDoors;}

void Car::displayCarInfo() { //Display vehicle info, and then complete with car info
	displayInfo();

	std::cout << "Doors: " << numDoors << std::endl;
}