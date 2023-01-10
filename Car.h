#pragma once
#include <string>
#include "Vehicle.h"

class Car : public Vehicle
{
public:

	Car();
	Car(std::string newName, int numWheels, float newTankLevel, float newTankCapacity);

	~Car();

	std::string GetVehicleTypeName();

};

