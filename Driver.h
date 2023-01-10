#pragma once
#include <string>;


class Vehicle;

class Driver
{
public:

	//Constructors/Destructors.
	Driver();
	Driver(std::string name, Vehicle* newVehicle);

	~Driver();

	//Public functions.
	void Print();
	void RegisterVehicle(Vehicle* newVehicle);

protected:

	std::string name;
	Vehicle* currentVehicle;
};

