#include <iostream>
#include <vector>

#include "myVector.h"

int main()
{
	std::cout << "Introduceti numarul de elemente de adaugat: ";
	int nrElemente;
	std::cin >> nrElemente;
	std::vector<std::string> myArray(nrElemente);

	std::string temp;
	for(int i = 0; i < nrElemente; i++)
	{
		std::cin >> myArray[i];
	}

	std::cout << std::endl;

	std::sort(myArray.begin(), myArray.end(),
		   [](const std::string& string1, const std::string& string2)->bool
		   {
			   return string1 < string2;
		   }
		   );

	for(const auto &i : myArray)
	{
		std::cout << i << std::endl;
	}

	std::cout << "-------------------------------" << std::endl;

	std::cout << "Introduceti numarul de elemente: ";
	std::cin >> nrElemente;
	myVectorClass myArray2(nrElemente);
	std::cout << std::endl;

	int buffer;
	for(int i = 0; i < nrElemente; i++)
	{
		std::cin >> buffer;
		myArray2.Add(buffer);
	}
	myArray2.Print();

	myArray2.Iterate( [](int& element)
					  {
						  element = element * 2;
					  }
					  );
	myArray2.Print();

	std::cout << std::endl;

	myArray2.Filter([](int element)->bool
					{
						return (element % 4) == 0;
					}
					);
	myArray2.Print();

	return 0;
}
