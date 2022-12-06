#pragma once
#include <string>
#include <iostream>
#include "Vehicle.h"

class Motorbike : public Vehicle
{
public:

	Motorbike();
	Motorbike(std::string newName, int numWheels, float newTankLevel, float newTankCapacity);

	~Motorbike();

};

