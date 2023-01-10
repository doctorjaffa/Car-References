#include "Driver.h"
#include "Vehicle.h"
#include <iostream>

Driver::Driver()
	: name("")
	, currentVehicle(nullptr)
{
}

Driver::Driver(std::string name, Vehicle* newVehicle)
	: name(name)
	, currentVehicle(newVehicle)
{

}

Driver::~Driver()
{
}

void Driver::Print()
{
	std::cout << "\nDriver: " << name << "\n";

	if (currentVehicle)
	{
		std::cout << "Current Vehicle: " << currentVehicle->GetName() << "\n";
	}
}
void Driver::RegisterVehicle(Vehicle* newVehicle)
{
	
	currentVehicle = newVehicle;

	if (currentVehicle != nullptr)
	{
		currentVehicle->Print();
	}

	/*
	Car* carPtr = dynamic_cast<Car*>(currentVehicle);
	Motorbike* bikePtr = dynamic_cast<Motorbike*>(currentVehicle);
	Truck* truckPtr = dynamic_cast<Truck*>(currentVehicle);

	if (carPtr != nullptr)
	{
		carPtr->Print();
	}
	if (bikePtr != nullptr)
	{
		bikePtr->Print();
	}
	if (truckPtr != nullptr)
	{
		truckPtr->Print();
	}

	*/

	//currentVehicle->Print();
}


