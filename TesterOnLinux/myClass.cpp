//
// Created by andrew on 24.05.2021.
//

#include <iostream>

#include "myClass.h"

void myClass::setString(const char* _string)
{
	int temp = strlen(_string);
	delete[] myString;
	myString = new char[temp + 1];
	strcpy(myString, _string);
	myString[temp] = '\0';
}

const char* myClass::getString()
{
	return myString;
}

void myClass::print()
{
	std::cout << myString << std::endl;
}

int myClass::operator+(const myClass &current)
{
	//returns the vectorial product of myClass::x,y and current::x,i
	return (this->x * current.x) + (this->y * current.y);
}

void myClass::setValues(int _x, int _y)
{
	this->x = _x;
	this->y = _y;
}


