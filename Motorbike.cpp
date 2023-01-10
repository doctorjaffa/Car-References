#include "Motorbike.h"

Motorbike::Motorbike()
	: Vehicle()
{
}

Motorbike::Motorbike(std::string newName, int numWheels, float newTankLevel, float newTankCapacity)
	: Vehicle(newName, numWheels, newTankLevel, newTankCapacity)
{
	std::cout << "\nMotorbike " << name << "  was constructed using parameters.";
}

Motorbike::~Motorbike()
{
	std::cout << "\nMotorbike " << name << " was destroyed.";
}

std::string Motorbike::GetVehicleTypeName()
{
	return "Motorbike";
}
