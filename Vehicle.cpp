#include "Vehicle.h"
#include <iostream>
#include <string>

Vehicle::Vehicle()
	: name()
	, petrol()
	, numWheels()
{
}

Vehicle::Vehicle(std::string newName, float newPetrol, int newWheels)
	: name(newName)
	, petrol(newPetrol)
	, numWheels(newWheels)
{
}

Vehicle::~Vehicle()
{
}

std::string Vehicle::GetName()
{
	return name;
}

float Vehicle::GetPetrol()
{
	return petrol;
}

int Vehicle::GetWheels()
{
	return numWheels;
}

void Vehicle::SetPetrol(float changeAmount)
{
	std::string userAnswer;

	std::cout << "Are you filling your vehicle up with this amount? Y/N\n";
	std::cin >> userAnswer;

	if (userAnswer == "Y")
	{
		petrol += changeAmount;
	}
	else {
		petrol -= changeAmount;
	}
}

void Vehicle::Print()
{
	std::cout << "\n\nCar Details:\n";
	std::cout << "Name: " << GetName();
	std::cout << "\nPetrol level: " << GetPetrol();
	std::cout << "\nWheels: " << GetWheels();
}


