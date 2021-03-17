#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <stdlib.h>
#include "Number.h"
#include "exponent.h"

Number::Number(const char* value, int base)
{
	std::cout << "Ctor called" << std::endl;
	if (value == nullptr)
	{
		std::cout << "Constructor pointer is invalid" << std::endl;
		exit(EXIT_FAILURE);
	}
	if(base < 2 || base > 16)
	{
		std::cout << "Constructor base is invalid" << std::endl;
		exit(EXIT_FAILURE);
	}

	number = new char[strlen(value)+1]; //+1 for null termination
	strcpy(number, value);

	this->base = base;
	for (int i = 0; i < strlen(value); i++)
	{
		if (value[i] >= '0' && value[i] <= '9')
			numberBase10 = numberBase10 * base + (value[i] - '0');
		else
			numberBase10 = numberBase10 * base + (value[i] - 'A' + 10);
	}

}

Number::Number(const Number& oldNumber)
{
	number = new char[strlen(oldNumber.number) + 1];
	strcpy(number, oldNumber.number);
	base = oldNumber.base;
	isNegative = oldNumber.isNegative;
}

Number::Number(Number&& oldNumber)
{
	number = oldNumber.number;
	this->base = oldNumber.base;
	this->isNegative = oldNumber.isNegative;
	oldNumber.number = nullptr;
}

Number::~Number()
{
	std::cout << "Dtor called" << std::endl;
	if(number != nullptr)
		delete[] number;
	number = nullptr;
}

bool Number::operator==(Number otherNumber)
{
	
	if (isNegative != otherNumber.isNegative)
		return false;
	if (base != otherNumber.base)
		return false;
	if (strlen(number) != strlen(otherNumber.number))
		return false;
	for (int i = 0; i < strlen(number); i++)
	{
		if (number[i] != otherNumber.number[i])
			return false;
	}
	return true;
}

Number operator+(const Number& firstNum, const Number& secondNum)
{
	unsigned short int maxBase = 2;
	if (firstNum.base >= secondNum.base)
		maxBase = firstNum.base;
	else maxBase = secondNum.base;
	return firstNum;
	//switch bases
	//add
}

void Number::SwitchBase(int newBase)
{
	if (newBase < 1)
		return;
	if (base == newBase)
	{
		std::cout << "Same base conversion!";
		return;
	}

	if (isPowerOfTwo(base) && isPowerOfTwo(newBase))
	{
		//base 2^k -> 2
		if (newBase == 2)
		{
			//int tempBufferLenght = getExponent(base) * strlen(this->number);
			//char* buffer = new char[tempBufferLenght+1];
			//int temp = 0;
			//while (temp < strlen(this->number))
			//{
			//	int currentSymbol = 0;
			//	if (number[temp] >= '0' && number[temp] <= '9')
			//		currentSymbol = number[temp] - '0';
			//	if (number[temp] >= 'A' && number[temp] <= 'F')
			//		currentSymbol = number[temp] - '7';
			//	for (int i = 3; i >= 0; i--)
			//	{
			//		buffer[i + temp*4] = currentSymbol % 2 + '1';
			//		currentSymbol /= 2;
			//	}
			//	temp++;
			//}
			////delete[] number;
			////char* number = new char[tempBufferLenght];
			//*number = *buffer;
			////memcpy(number, buffer, tempBufferLenght);
			////delete[] buffer;
			//buffer[tempBufferLenght + 1] = 0;
		}

		//base 2 -> 2^k
		//base 2^k -> 2 ->2^j
	}
	else
	{

		//base whatever -> base 10 -> base newBase
	}
}

void Number::Print()
{
	std::cout << number << std::endl << strlen(this->number)<< std::endl;
	std::cout << numberBase10 << std::endl;
}

int Number::GetDigitsCount() const
{
	return strlen(number);
}

unsigned short int Number::GetBase() const
{
	return this->base;
}
