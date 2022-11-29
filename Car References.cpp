// Car References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "Motorbike.h"
#include "Driver.h"

int main()
{
	/*
	Car car1("Ford", 145.0f);
	Car* carPtr = nullptr;

	carPtr = &car1;

	if (carPtr)
	{
		carPtr->GetName();
	}

	Driver driver1("Nathan", carPtr);

	//std::cout << driver1.name + " " << &driver1 << "\n";
	//std::cout << car1.driver.name + " " << &car1.driver << "\n";

	//car1.IntroduceDriver();

	driver1.Print();
	std::cout << "Petrol level: " << carPtr->GetPetrol() << "\n";

	carPtr->SetPetrol(35.0f);

	std::cout << "New petrol level: " << carPtr->GetPetrol() << "\n";
	*/

	Car car1("Ford", 120.0f, 4);
	Truck truck1("Big", 200.0f, 2, "Rubbish");
	Motorbike bike1("Fast", 100.0f, 0);

	car1.Print();

	std::cout << "\n\nTruck contents: " << truck1.GetContents() << "\n";

	truck1.SetContents("Firewood");
	
	truck1.Print();
	std::cout << "\n";

}


