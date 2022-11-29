#pragma once
#include <string>
#include <iostream>
#include "Vehicle.h"

class Truck : public Vehicle
{
public:

	Truck();
	Truck(std::string newName, float newPetrol, int newWheels, std::string newContents);

	~Truck();

	std::string GetContents();

	void SetContents(std::string newContents);

	void Print();

private:

	std::string bedContents;

};

