#include "Truck.h"

Truck::Truck()
	: Vehicle()
{
}

Truck::Truck(std::string newName, int newWheels, std::string newContents, float newTankLevel, float newTankCapacity)
	: Vehicle(newName, newWheels, newTankLevel, newTankCapacity)
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

std::string Truck::GetVehicleTypeName()
{
	return "Truck";
}

void Truck::SetContents(std::string newContents)
{
	bedContents = newContents;
}

void Truck::Print()
{
	Vehicle::Print();
	std::cout << "\nContents: " << GetContents();
}
