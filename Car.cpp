#include "Car.h"
#include <iostream>

Car::Car()
	: Vehicle()
{
}

Car::Car(std::string newName, float newPetrol, int numWheels)
	: Vehicle(newName, newPetrol, numWheels)
{
	std::cout << "\nCar " << name << "  was constructed using parameters.";
}

Car::~Car()
{
	std::cout << "\nCar " << name << " was destroyed.";
}
