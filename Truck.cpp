#include "Truck.h"

Truck::Truck()
	: Vehicle()
{
}

Truck::Truck(std::string newName, float newPetrol, int newWheels, std::string newContents)
	: Vehicle(newName, newPetrol, newWheels)
	, bedContents(newContents)
{
	std::cout << "\nTruck " << name << " was constructed using parameters.";
}

Truck::~Truck()
{
	std::cout << "\nTruck " << name << " was destroyed.";
}

std::string Truck::GetContents()
{
	return bedContents;
}

void Truck::SetContents(std::string newContents)
{
	bedContents = newContents;
}

void Truck::Print()
{
	Vehicle::Print();
	std::cout << "\n" << GetContents();
}
