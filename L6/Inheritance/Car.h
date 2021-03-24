#pragma once
#include "Weather.h"

class Car
{
protected:
	float fuelCapacity;
	float fuelConsumption;
	float averageSpeed[3];
	float carDynamics;
	int place;
	bool finish = true;
public:
	virtual void setAverageSpeed(float speed1, float speed2, float speed3) = 0;
	virtual void setFuelCapacity(float capacity) = 0;
	virtual void setFuelConsumption(float consumption) = 0;
	virtual void setCarDynamics(float dynamics) = 0;
	virtual float getAverageSpeed(Weather weather) = 0;
	virtual float getCapacity() = 0;
	virtual float getConsumption() = 0;
	virtual void setPlace(int place) = 0;
	virtual void setFinish(bool value) = 0;
	virtual bool getFinish() = 0;
	virtual void Print() = 0;
};

