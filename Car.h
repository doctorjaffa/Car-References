#pragma once
#include <string>
#include "Vehicle.h"

class Car : public Vehicle
{
public:

	Car();
	Car(std::string newName, float newPetrol, int numWheels);

	~Car();

};

