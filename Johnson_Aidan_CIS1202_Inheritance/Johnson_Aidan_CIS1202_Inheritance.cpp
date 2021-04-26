//Aidan Johnson
//CIS 1202 101
//April 25, 2021
#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main()
{
	Vehicle vehicle;
	Car car;
	Truck truck;
	string tempManufacturer;
	int tempYearBuilt, tempNumDoors, tempTowCap;

	cout << "Vehicle Program" << endl << endl;

	//Obtain information from user for vehicle
	cout << "Vehicle:" << endl
		<< "Enter the manufacturer: ";
	getline(cin, tempManufacturer);
	vehicle.setManufacturer(tempManufacturer);

	cout << "Enter the year built: ";
	cin >> tempYearBuilt;
	vehicle.setYearBuilt(tempYearBuilt);

	//Display information for vehicle
	vehicle.displayInfo();



	//Obtain information from user for car
	cout << "\nCar: " << endl
		<< "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, tempManufacturer);
	car.setManufacturer(tempManufacturer);

	cout << "Enter the year built: ";
	cin >> tempYearBuilt;
	car.setYearBuilt(tempYearBuilt);

	cout << "Enter the number of doors: ";
	cin >> tempNumDoors;
	car.setNumDoors(tempNumDoors);

	//Display information for car
	car.displayCarInfo();



	//Obtain information from user for truck
	cout << "\nTruck: " << endl
		<< "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, tempManufacturer);
	truck.setManufacturer(tempManufacturer);

	cout << "Enter the year built: ";
	cin >> tempYearBuilt;
	truck.setYearBuilt(tempYearBuilt);

	cout << "Enter the towing capacity: ";
	cin >> tempTowCap;
	truck.setTowCap(tempTowCap);

	//Display information for truck
	truck.displayTowCap();
}