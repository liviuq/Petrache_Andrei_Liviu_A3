#pragma once
#include <iostream>
#include "Car.h"
class Dacia : public Car
{
private:
	const char* name = "Dacia";
public:
	Dacia();
	//~Dacia();
	void setAverageSpeed(float speed1, float speed2, float speed3);
	void setFuelCapacity(float capacity);
	float getCapacity();
	void setFuelConsumption(float consumption);
	float getConsumption();
	void setCarDynamics(float dynamics);
	float getAverageSpeed(Weather weather);
	void setPlace(int place);
	void setFinish(bool value);
	bool getFinish();
	void Print();
};

