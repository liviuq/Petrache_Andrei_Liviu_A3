#pragma once
#include "Car.h"
class Mazda : public Car
{
private:
	const char* name = "Mazda";
public:
	Mazda();
	void setAverageSpeed(float speed1, float speed2, float speed3);
	void setFuelCapacity(float capacity);
	float getCapacity();
	float getConsumption();
	void setFuelConsumption(float consumption);
	void setCarDynamics(float dynamics);
	float getAverageSpeed(Weather weather);
	void setPlace(int place);
	void setFinish(bool value);
	bool getFinish();
	void Print();
};

