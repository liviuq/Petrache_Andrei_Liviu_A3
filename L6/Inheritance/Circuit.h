#pragma once
#include <iostream>
#include "Car.h"
#include "Weather.h"
using namespace std;

class Circuit
{
private:
	int length;
	int laps;
	int weatherToRace;
	Car** participants;
	int numberOfParticipants;
public:
	Circuit() : 
		length(0), 
		laps(0),
		weatherToRace((int)(Weather::Sunny)),
		participants(nullptr),
		numberOfParticipants(0)	{}
	Circuit(int lengthToRace, int nrLaps, Weather weather) :
		length(lengthToRace),
		laps(nrLaps),
		weatherToRace((int)(weather)),
		participants(nullptr),
		numberOfParticipants(0) {}
	~Circuit();
	Circuit(const Circuit& circuitToCopy);
	//Circuit operator=(Circuit c);
	//Circuit(const Circuit&& circuitToMove);
	void SetLength(int lenght);
	void SetWeather(Weather weatherToSet);
	void AddCar(Car* car);
	void race();
	void showFinalRanks();
	void showWhoDidNotFinish();
	void Print();
	friend void Print(Circuit circuit);
};

	