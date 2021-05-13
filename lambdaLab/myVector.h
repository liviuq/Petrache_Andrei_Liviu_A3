//
// Created by andrew on 12.05.2021.
//

#ifndef LAMBDALAB_MYVECTORCLASs_H
#define LAMBDALAB_MYVECTORCLASS_H

#include <vector>

class myVectorClass
{
public:
	myVectorClass(int capacity):
		size(0),
		capacity(capacity),
		myArray(size) {}

	bool Add(int);
	bool Delete(int index);
	void Iterate( void(*callback) (int&));
	void Filter( bool(*callback)(int));

	void Print();
private:
	int size;
	int capacity;
	std::vector<int> myArray;
};


#endif //LAMBDALAB_MYVECTORCLASS_H
