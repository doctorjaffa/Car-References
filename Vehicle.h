#pragma once
#include <string>

class Vehicle
{

public:

	//Constructors/Destructors.
	Vehicle();
	Vehicle(std::string newName, int newWheels, float newTankLevel, float newTankCapacity);
	~Vehicle();

	//Getters.
	std::string GetName();
	int GetWheels();

	float GetTankLevel();

	//Public functions.
	void FillTank();
	void FillTank(float petrolToAdd);

	void Print();

protected:

	std::string name;
	float tankLevel;
	float tankCapacity;
	int numWheels;
};

