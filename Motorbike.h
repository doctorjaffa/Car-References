#pragma once
#include <string>
#include <iostream>
#include "Vehicle.h"

class Motorbike : public Vehicle
{
public:

	Motorbike();
	Motorbike(std::string newName, float newPetrol, int numWheels);

	~Motorbike();

};

