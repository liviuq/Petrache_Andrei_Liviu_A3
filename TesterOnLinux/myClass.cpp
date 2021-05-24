//
// Created by andrew on 24.05.2021.
//

#include <iostream>

#include "myClass.h"

void myClass::setString(const char* _string)
{
	int temp = (int)strlen(_string);
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

myClass::myClass(const myClass &toCopy)
{
	std::cout << "copy ctor called" << std::endl;

	//setting x,y
	this->x = toCopy.x;
	this->y = toCopy.y;

	//resetting the string
	int temp = (int)strlen(toCopy.myString);
	delete[] this->myString;
	this->myString = new char[ temp + 1];
	strcpy(this->myString, toCopy.myString);
	this->myString[temp] = '\0';
}

myClass::myClass(myClass &&toMove) noexcept
{
	std::cout << "move ctor called" << std::endl;

	//setting x,y
	this->x = toMove.x;
	this->y = toMove.y;

	//setting the string
	this->myString = toMove.myString;

	toMove.myString = nullptr;

}

myClass myClass::test(myClass d)
{
	return d;
}

myClass myClass::operator>(const myClass &_myClass)
{
	myClass temp(this->x, _myClass.y, "combined");
	return temp;
}

int myClass::operator!()
{
	return this->x % 10;
}

myClass &myClass::operator=(myClass &&tempClass)
{
	std::cout << "in assign operator" << std::endl;

	if(this != &tempClass)
	{
		this->x = tempClass.x;
		this->y = tempClass.y;
		this->myString = tempClass.myString;

		//release the data
		tempClass.myString = nullptr;
	}

	return (*this);
}




