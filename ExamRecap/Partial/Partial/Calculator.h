#pragma once

#include <iostream>
#include <vector>

#include "Operation.h"

class Calculator
{
private:
	std::vector<Operation*> operatii;
	std::vector<int> exists; //adunare, scadere, inmultire, impartire

public:

	Calculator() {} //ce ar trebui sa contina acest constructor?

	void Compute(int x, int y);

	operator int() { return operatii.size(); }
	bool operator[](const char* operatie);
	void operator+= (Operation* operation);
	void operator-=(std::string operatie);
};

