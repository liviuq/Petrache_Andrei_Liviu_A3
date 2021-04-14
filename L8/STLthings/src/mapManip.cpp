#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "..\include\mapManip.h"

void mapManip::addToMap(std::vector<std::string> words, std::map<std::string, int>& myMap)
{
	for (auto& i : words)
		myMap[i]++;
}

void mapManip::printMap(std::map<std::string, int>& myMap)
{
	for (const auto& [firstField, secondField] : myMap)
	{
		std::cout << '"' << firstField << '"' << " : " << secondField << " ," << std::endl;
	}
	std::cout << "End of print" << std::endl << std::endl;
}
