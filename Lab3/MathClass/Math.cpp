#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdarg>
#include "Math.h"

int Math::Add(int a, int b)
{
	return a+b;
}

int Math::Add(int a, int b, int c)
{
	return a+b+c;
}

int Math::Add(double a, double b)
{
	return a+b;
}

int Math::Add(double a, double b, double c)
{
	return a+b+c;
}

int Math::Mul(int a, int b)
{
	return a*b;
}

int Math::Mul(int a, int b, int c)
{
	return a*b*b;
}

int Math::Mul(double a, double b)
{
	return a*b;
}

int Math::Mul(double a, double b, double c)
{
	return a*b*c;
}

int Math::Add(int count, ...)
{
	va_list arg; //args list
	va_start(arg, count); //how many args we have in the call
	int suma = 0;
	while (count != 0)
	{
		int s = va_arg(arg, int);
		suma = suma + s;
		count--;
	}
	va_end(arg);
	return suma;
}

char* Math::Add(const char* a, const char* b)
{
	if (a == nullptr || b == nullptr)
		return nullptr;

	char* result = new char[200];

	int carry = 0, maxLen, minLen, difference;
	int i;
	maxLen = strlen(a) >= strlen(b) ? strlen(a) : strlen(b);
	minLen = strlen(a) < strlen(b) ? strlen(a) : strlen(b);

	result[maxLen] = '\0'; //ending of the vecotr

	for (i = 1; i <= minLen; i++, carry /= 10)
	{
		carry += (a[strlen(a) - i] - '0') + (b[strlen(b) - i] - '0'); //position match
		result[maxLen - i] = carry % 10 + '0';
	}

	difference = abs(maxLen - minLen);

	if (difference != 0)
		for (i = difference - 1; i >= 0; i--, carry /= 10)
		{
			if (strlen(a) > strlen(b))
			{
				carry += (a[i] - '0');
				result[i] = carry % 10 + '0';
			}
			else
			{
				carry += (b[i] - '0');
				result[i] = carry % 10 + '0';
			}
		}

	if (!carry) return result; //chech if we have a carry on first digit
	else //if we do, shift number 1 pos to right and copy "1" in the 0 th place
	{
		strcpy(result + 1, result);
		result[0] = '1';
		return result;
	}
}

char* Math::Mul(const char* str, int number)
{
	if (str == nullptr)
		return nullptr;
	if (number == 0)
		return 0;
	if (number == 1)
	{
		char* resultTemp = new char[300];
		strcpy(resultTemp, str);
		return resultTemp; //deallocate
	}

	char* result = new char[300];
	strcpy(result, "\0");

	int carry = 0, countPower = 0;

	while (number)
	{
		char temp[300] = {};
		int digit = number % 10;
		for (int i = strlen(str) - 1; i >= 0; i--, carry /= 10)
		{
			carry += (str[i] - '0') * digit;
			temp[i] = carry % 10 + '0';
		}
		carry /= 10;
		while(carry) //; carry /= 10)
		{
			carry /= 10;
			strcpy(temp + 1, temp);
			temp[0] = carry%10 + '0';
		}
		for (int i = 0; i < countPower; i++)
			strcat(temp, "0");
		number /= 10;
		countPower++;
		result = Math::Add(temp, result);
	}

	return result;
}
