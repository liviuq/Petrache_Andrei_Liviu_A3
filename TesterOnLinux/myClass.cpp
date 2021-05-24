//
// Created by andrew on 24.05.2021.
//

#include <iostream>

#include "myClass.h"

void myClass::setString(std::string& string)
{
	this->myString = string;
}

std::string &myClass::getString()
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
