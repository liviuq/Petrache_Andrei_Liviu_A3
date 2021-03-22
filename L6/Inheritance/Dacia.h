#pragma once
#include <iostream>
#include "Car.h"
class Dacia : public Car
{
	void setAverageSpeed(int speed);
	void setFuelCapacity(int capacity);
	void setFuelConsumption(int consumption);
	void setCarDynamics(int dynamics);
	int getAverageSpeed();
};

