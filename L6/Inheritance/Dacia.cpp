#include "Dacia.h"
#include "Weather.h"
using namespace std;

Dacia::Dacia()
{
	setAverageSpeed(80.0f,65.0f,45.0f);
	setFuelCapacity(40.0f);
	setFuelConsumption(12.0f);
	setCarDynamics(0.3f);
	setPlace(0);
}
void Dacia::setAverageSpeed(float speed1, float speed2, float speed3)
{
	averageSpeed[0] = speed1;
	averageSpeed[1] = speed2;
	averageSpeed[2] = speed3;
};


void Dacia::setFuelCapacity(float capacity)
{
	this->fuelCapacity = capacity;
}

float Dacia::getCapacity()
{
	return this->fuelCapacity;
}

void Dacia::setFuelConsumption(float consumption)
{
	this->fuelConsumption = consumption;
}

float Dacia::getConsumption()
{
	return this->fuelConsumption;
}

void Dacia::setCarDynamics(float dynamics)
{
	this->carDynamics = dynamics;
}

float Dacia::getAverageSpeed(Weather weather)
{
	return(averageSpeed[0] + averageSpeed[1] + averageSpeed[2]) / 3;
}

void Dacia::setPlace(int place)
{
	this->place = place;
}

void Dacia::setFinish(bool value)
{
	this->finish = value;
}

bool Dacia::getFinish()
{
	return this->finish;
}

void Dacia::Print()
{
	cout << this << " Dacia" << endl;
}
