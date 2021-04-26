#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle
{
private: //Private member variables
	std::string manufacturer;
	int yearBuilt;

public:
	Vehicle(); //Default Constructor

	Vehicle(std::string, int); //Constructor

	//Setter functions
	void setManufacturer(std::string);
	void setYearBuilt(int);

	//Getter functions
	std::string getManufacturer();
	int getYearBuilt();

	void displayInfo(); //Function to display info from one vehicle instance
};
#endif