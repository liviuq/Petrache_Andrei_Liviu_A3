#include "Calculator.h"

#include <cstring>

void Calculator::Compute(int x, int y)
{
	for (auto i : operatii)
	{
		std::cout << i->GetOperation() << "(" << x << "," << y << ") = " << i->result(x, y) << std::endl;
	}
}

void Calculator::operator+=(Operation* operation)
{
	bool isExistent = false;
	for (auto i : operatii)
	{
		if (i->GetOperation() == operation->GetOperation())
		{
			isExistent = true;
			break;
		}
	}
	if (isExistent == false)
		operatii.push_back(operation);
}

bool Calculator::operator[](const char* operatie)
{
	for (auto i : operatii)
	{
		if (i->GetOperation() == operatie )
			return true;
	}
	return false;
}

void Calculator::operator-=(std::string operatie)
{
	int counter = 0;
	for (auto i : operatii)
	{
		if (i->GetOperation() == operatie)
		{
			operatii.erase(operatii.begin() + counter);
		}
		counter++;
	}
}
