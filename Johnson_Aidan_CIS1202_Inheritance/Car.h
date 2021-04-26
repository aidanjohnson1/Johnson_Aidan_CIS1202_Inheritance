#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "Vehicle.h" //Include base class header file

class Car : public Vehicle //Car is a vehicle
{
private: //Private member variables
	int numDoors;

public:
	Car(); //Default Constructor

	Car(int); //Constructor

	//Setter funciton
	void setNumDoors(int);

	//Getter function
	int getNumDoors();

	void displayCarInfo(); //Display vehicle info, and then complete with car info
};
#endif