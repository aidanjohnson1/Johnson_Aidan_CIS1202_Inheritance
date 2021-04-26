#include "Vehicle.h"

//Constructors
Vehicle::Vehicle() { manufacturer = ""; yearBuilt = 0; }
Vehicle::Vehicle(std::string maker, int built) {
	manufacturer = maker;
	yearBuilt = built;
}

//Setter functions
void Vehicle::setManufacturer(std::string maker) {
	manufacturer = maker;
}
void Vehicle::setYearBuilt(int built) {
	yearBuilt = built;
}

//Getter functions
std::string Vehicle::getManufacturer() {
	return manufacturer;
}
int Vehicle::getYearBuilt() {
	return yearBuilt;
}

void Vehicle::displayInfo() { //Function to display info from one vehicle instance
	std::cout << "\nVehicle Information: \n"
		<< "Manufacturer: " << manufacturer
		<< "\nYear Built: " << yearBuilt << std::endl;
}