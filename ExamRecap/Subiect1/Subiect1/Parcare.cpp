#include <iostream>

#include "Parcare.h"

void Parcare::Create(int Maxcapacity)
{
	capacity = Maxcapacity;
}

bool Parcare::Add(Masina* masina)
{
	if (cars.size() + 1 <= capacity)
	{
		cars.push_back(masina);
		return true;
	}
	else
		return false;

}

void Parcare::RemoveByName(std::string name)
{
	int counter = 0;
	for (int i = 0; i < cars.size(); i++)
	{
		if (cars.at(i)->GetName() == name)
			cars.erase(cars.begin() + i);
	}
}

int Parcare::GetCount()
{

	return cars.size();
}

bool Parcare::IsFull()
{
	return cars.size() == capacity;
}

void Parcare::ShowAll()
{
	std::cout << "SHOW ALL:";
	for (auto i : cars)
	{
		std::cout << i->GetName() << "(" << i->GetColor() << ")" << ", ";
	}
	std::cout << std::endl;
}

void Parcare::ShowByColor(std::string color)
{
	std::cout << "SHOW COLOR" << " (" << color << "):";
	for (auto i : cars)
	{
		if (i->GetColor() == color)
			std::cout << i->GetName() << ", ";
	}
	std::cout << std::endl;
}
