#include <iostream>
#include "Math.h"

int main(int argc, char** argv)
{
	std::cout << "We got " << Math::Add("123", "456") << std::endl;
	std::cout << "Adding 2 ints together = " << Math::Add(3, 4) << std::endl;
	std::cout << "Adding a variable number of values together = " << Math::Add(5, 7, 8, 9, 10, 11) << std::endl;
	std::cout << "Adding two strings together in an \'int\' way = " << Math::Add("2468", "22222222") << std::endl;
	std::cout << "Multiplying 2 numbers, 1 string, 1 int = " << Math::Mul("19", 2) << std::endl;
	return 0;
}