#include "Car.h"
#include <iostream>

Car::Car()
	: Vehicle()
{
}

Car::Car(std::string newName, int numWheels, float newTankLevel, float newTankCapacity)
	: Vehicle(newName, numWheels, newTankLevel, newTankCapacity)
{
	std::cout << "\nCar " << name << "  was constructed using parameters.";
}

Car::~Car()
{
	std::cout << "\nCar " << name << " was destroyed.";
}
