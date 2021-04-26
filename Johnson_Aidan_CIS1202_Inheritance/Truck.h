#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <string>
#include "Vehicle.h" //Include base class header file

class Truck : public Vehicle //Truck is a vehicle
{
private: //Private member variable
	int towingCapacity;

public:
	Truck(); //Default Constructor

	Truck(int); //Constructor

	//Setter function
	void setTowCap(int);

	//Getter function
	int getTowCap();

	//Display function
	void displayTowCap();
};
#endif