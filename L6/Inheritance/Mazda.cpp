#include <iostream>
#include "Mazda.h"
using namespace std;

Mazda::Mazda()
{
	setAverageSpeed(140.0f, 105.0f, 90.0f);
	setFuelCapacity(45.0f);
	setFuelConsumption(8.0f);
	setCarDynamics(0.8f);
	setPlace(0);
}

void Mazda::setAverageSpeed(float speed1, float speed2, float speed3)
{
	averageSpeed[0] = speed1;
	averageSpeed[1] = speed2;
	averageSpeed[2] = speed3;
}

void Mazda::setFuelCapacity(float capacity)
{
	this->fuelCapacity = capacity;
}

float Mazda::getCapacity()
{
	return this->fuelCapacity;
}

float Mazda::getConsumption()
{
	return this->fuelConsumption;
}

void Mazda::setFuelConsumption(float consumption)
{
	this->fuelConsumption = consumption;
}

void Mazda::setCarDynamics(float dynamics)
{
	this->carDynamics = dynamics;
}

float Mazda::getAverageSpeed(Weather weather)
{
	return (averageSpeed[0] + averageSpeed[1] + averageSpeed[2]) / 3;
}

void Mazda::setPlace(int place)
{
	this->place = place;
}

void Mazda::setFinish(bool value)
{
	this->finish = value;
}

bool Mazda::getFinish()
{
	return this->finish;
}

void Mazda::Print()
{
	cout << this << " Mazda" << endl;
}
