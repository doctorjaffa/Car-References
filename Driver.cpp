#include "Driver.h"
#include "Car.h"
#include <iostream>

Driver::Driver()
	: name("")
	, currentCar(nullptr)
{
}

Driver::Driver(std::string name, Car* newCar)
	: name(name)
	, currentCar(newCar)
{

}

void Driver::Print()
{
	std::cout << "\nDriver: " << name << "\n";

	if (currentCar)
	{
		std::cout << "Current Car: " << currentCar->GetName() << "\n";
	}
}
void Driver::SetCar(Car* newCar)
{
	currentCar = newCar;
}


