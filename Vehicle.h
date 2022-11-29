#pragma once
#include <string>

class Vehicle
{

public:

	//Constructors/Destructors.
	Vehicle();
	Vehicle(std::string newName, float newPetrol, int newWheels);
	~Vehicle();

	//Getters.
	std::string GetName();
	float GetPetrol();
	int GetWheels();

	//Setters.
	void SetPetrol(float changeAmount);

	void Print();

protected:

	std::string name;
	float petrol;
	int numWheels;
};

