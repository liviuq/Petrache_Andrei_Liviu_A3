#pragma once
#include "exponent.h"

bool isPowerOfTwo(int number)
{
	return number && (!(number & (number - 1))); // 16 =2  10000    15 =2 01111  16&15 = 0
	//returns 0 if number is not a power of 2, 1 otherwise
}
short int getExponent(int number)
{
	short int exponent = -1;
	while (number) { number >>= 1;exponent++; }
	return exponent;
}
