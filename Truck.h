#pragma once
#include <string>
#include <iostream>
#include "Vehicle.h"

class Truck : public Vehicle
{
public:

	Truck();
	Truck(std::string newName, int newWheels, std::string newContents, float newTankLevel, float newTankCapacity);

	~Truck();

	std::string GetContents();
	std::string GetVehicleTypeName();

	void SetContents(std::string newContents);

	void Print();

private:

	std::string bedContents;

};

