#pragma once
class Car
{
protected:
	float fuelCapacity;
	float fuelConsumption;
	float averageSpeed[3];
	float carDynamics;
public:
	virtual void setAverageSpeed(int speed) = 0;
	virtual void setFuelCapacity(int capacity) = 0;
	virtual void setFuelConsumption(int consumption) = 0;
	virtual void setCarDynamics(int dynamics) = 0;
	virtual int getAverageSpeed() = 0;
};

