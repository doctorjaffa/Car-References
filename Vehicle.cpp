#include "Vehicle.h"
#include <iostream>
#include <string>

Vehicle::Vehicle()
	: name("")
	, numWheels(0)
	, tankLevel(0)
	, tankCapacity(0)
{
}

Vehicle::Vehicle(std::string newName, int newWheels, float newTankLevel, float newTankCapacity)
	: name(newName)
	, numWheels(newWheels)
	, tankLevel(newTankLevel)
	, tankCapacity(newTankCapacity)
{
}

Vehicle::~Vehicle()
{
}

std::string Vehicle::GetName()
{
	return name;
}

int Vehicle::GetWheels()
{
	return numWheels;
}

float Vehicle::GetTankLevel()
{
	return tankLevel;
}

void Vehicle::FillTank()
{
	tankLevel = tankCapacity;
}

void Vehicle::FillTank(float petrolToAdd)
{
	tankLevel += petrolToAdd;

	if (tankLevel > tankCapacity)
	{
		tankLevel = tankCapacity;
	}
}

void Vehicle::Print()
{
	std::cout << "\n\nCar Details:\n";
	std::cout << "Vehicle Type: " << GetVehicleTypeName();
	std::cout << "\nName: " << GetName();
	std::cout << "\nTank level: " << GetTankLevel();
	std::cout << "\nWheels: " << GetWheels();
}


