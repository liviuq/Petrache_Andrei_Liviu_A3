//
// Created by andrew on 12.05.2021.
//
#include <iostream>
#include "myVector.h"

bool myVectorClass::Add(int newElement)
{
	myArray.push_back(newElement);
	this->size++;
	return true;
}

bool myVectorClass::Delete(int index)
{
	myArray.erase(myArray.begin() + index);
	this->size--;
	return true;
}

void myVectorClass::Iterate( void(*callback) (int& element))
{
	for(int i = 0; i < size; i++)
	{
		callback(myArray[i]);
	}
}

void myVectorClass::Filter( bool(*callback)(int))
{
	for(int i = 0; i < size; i++)
	{
		if( callback(myArray[i]))
		{
			for( int j = i; j < size; j++)
				myArray[j] = myArray[j + 1];
			myArray[size] = 0;
			size--;
			i--; // re-check the element on the position we just deleted
		}
	}
}


void myVectorClass::Print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << myArray[i] << " ";
	}
	std::cout << std::endl;
}