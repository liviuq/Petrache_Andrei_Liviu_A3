#pragma once

#include <vector>

#include "Masina.h"

class Parcare
{
private:
	std::vector<Masina*> cars;
	int capacity;

public:

	void Create(int Maxcapacity);
	bool Add(Masina* masina);
	void RemoveByName(std::string name);
	int GetCount();
	bool IsFull();
	void ShowAll();
	void ShowByColor(std::string color);
};

