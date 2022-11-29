#include "Motorbike.h"

Motorbike::Motorbike()
	: Vehicle()
{
}

Motorbike::Motorbike(std::string newName, float newPetrol, int numWheels)
	: Vehicle(newName, newPetrol, numWheels)
{
	std::cout << "\nMotorbike " << name << "  was constructed using parameters.";
}

Motorbike::~Motorbike()
{
	std::cout << "\nMotorbike " << name << " was destroyed.";
}
