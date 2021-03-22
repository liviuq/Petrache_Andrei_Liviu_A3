#include "Circuit.h"

using namespace std;

Circuit::~Circuit()
{
	if (participants != nullptr)
	{
		delete[] participants;
		participants = nullptr;
	}

	length = laps = numberOfParticipants = 0;
}

//Circuit::Circuit(const Circuit& circuitToCopy)
//{
//	length = circuitToCopy.length;
//	laps = circuitToCopy.laps;
//	weatherToRace = circuitToCopy.weatherToRace;
//	numberOfParticipants = circuitToCopy.numberOfParticipants;
//	delete[] participants;
//	participants = new Car[numberOfParticipants];
//
//}
//
//Circuit::Circuit(const Circuit&& circuitToMove)
//{
//
//}

void Circuit::SetLength(int length)
{
	this->length = length;
}

void Circuit::SetWeather(Weather weatherToSet)
{
	this->weatherToRace = (int)(weatherToSet);
}

void Circuit::AddCar(Car* car)
{
	if (numberOfParticipants == 0)
	{
		numberOfParticipants = 1;
		participants = new Car*[1];
		participants[0] = car;
	}
	else
	{
		numberOfParticipants++;
		Car** temp = new Car* [numberOfParticipants]; //create a new heap alloc array
		for (int i = 0; i < numberOfParticipants - 1; i++)
			temp[i] = participants[i]; //copy the signed-up cars
		temp[numberOfParticipants-1] = car; //add the last car
		delete participants;
		participants = new Car * [numberOfParticipants];
		for (int i = 0; i < numberOfParticipants; i++)
			participants[i] = temp[i];
		
		//for (int i = 0; i < numberOfParticipants; i++)
		delete[] temp;
	}
}

void Circuit::race()
{

}

void Circuit::showFinalRanks()
{
}

void Circuit::showWhoDidNotFinish()
{
}

void Circuit::Print()
{
	cout << "Nr of participants = " << numberOfParticipants << endl;
	for (int i = 0; i < numberOfParticipants; i++)
		cout << participants[i] << endl;
}