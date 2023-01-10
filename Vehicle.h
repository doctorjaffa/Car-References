#pragma once
#include <string>

class Vehicle
{

public:

	//Constructors/Destructors.
	Vehicle();
	Vehicle(std::string newName, int newWheels, float newTankLevel, float newTankCapacity);
	virtual ~Vehicle();

	//Getters.
	std::string GetName();
	int GetWheels();

	float GetTankLevel();
	virtual std::string GetVehicleTypeName() = 0;

	//Public functions.
	void FillTank();
	void FillTank(float petrolToAdd);

	virtual void Print();

protected:

	std::string name;
	float tankLevel;
	float tankCapacity;
	int numWheels;
};

