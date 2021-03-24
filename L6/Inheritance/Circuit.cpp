#include "Circuit.h"
using namespace std;

Circuit::~Circuit()
{
	if(participants != nullptr)
	{
		//delete[] participants;
		for (int i = 0; i < numberOfParticipants; i++)
			delete[] participants[i];
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
//	participants = new Car* [numberOfParticipants];
//	for(int i = 0; i < numberOfParticipants; i++)
//		participants[i] = circuitToCopy.participants[i];
//	participants = circuitToCopy.participants;
//}

//Circuit& Circuit::operator=(Circuit& c)
//{
//
//
//	return (*this);
//}

//Circuit::Circuit(const Circuit&& circuitToMove)
//{
//	length = circuitToMove.length;
//	laps = circuitToMove.laps;
//	weatherToRace = circuitToMove.weatherToRace;
//	numberOfParticipants = circuitToMove.numberOfParticipants;
//	participants = circuitToMove.participants;
//	delete[] circuitToMove.participants;
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
		delete[] temp;
	}
}

void Circuit::race()
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < numberOfParticipants; j++)
		{
			if (participants[i]->getCapacity() > 0)
			{
				participants[i]->setFuelCapacity(participants[i]->getCapacity() - participants[i]->getConsumption());
			}
			else
			{
				if (i < length && participants[j]->getFinish())
				{
					participants[j]->setFinish(false);
					didNotFinish[numberOfParticipantsNotFinish++] = participants[j];
				}
			}
		}
	}
}

void Circuit::showFinalRanks()
{
	cout << "FINNISHERS:" << endl;
	for (int i = 0; i < numberOfParticipants - numberOfParticipantsNotFinish; i++)
	{
		participants[i]->Print();
	}
	cout << "LOOSERS:" << endl;
	for (int i = 0; i < numberOfParticipantsNotFinish; i++)
	{
		didNotFinish[i]->Print();
	}
}

void Circuit::showWhoDidNotFinish()
{
	for (int i = 0; i < numberOfParticipantsNotFinish; i++)
	{
		didNotFinish[i]->Print();
	}
}

void Circuit::PrintAllCars()
{
	for (int i = 0; i < numberOfParticipants; i++)
		participants[i]->Print();
}
