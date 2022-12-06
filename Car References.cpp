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

	//Create vehicle instances.
	Car car1("Ford", 4, 155.2f, 175.0f);
	Truck truck1("Big", 2, "Rubbish", 186.4f, 200.0f);
	Motorbike bike1("Fast", 0, 43.1f, 100.0f);

	//Print car details.
	car1.Print();

	//Print truck contents.
	std::cout << "\n\nTruck contents: " << truck1.GetContents() << "\n";

	//Set truck contents.
	truck1.SetContents("Firewood");
	
	//Print truck details.
	truck1.Print();
	std::cout << "\n";

	//Print bike details.
	bike1.Print();
	std::cout << "\n";

	//Fill bike tank by 20.2f
	bike1.FillTank(20.2f);
	std::cout << "\nNew tank level: " << bike1.GetTankLevel();

	//Fill bike completely.
	bike1.FillTank();
	std::cout << "\nNew tank level: " << bike1.GetTankLevel();

}


