#pragma once
#include <string>;

class Car;

class Driver
{
public:

	Driver();
	Driver(std::string name, Car* newCar);

	void Print();

	void SetCar(Car* newCar);

private:

	std::string name;
	Car* currentCar;
};

