#include <iostream>
#include <random>
#include "Sort.h"
using namespace std;

int main()
{
	Sort *vector = new Sort(10, 5, 9);
	vector->Print();
	vector->InsertSort();
	vector->Print();
	vector = new Sort(15, 0, 30);
	vector->QuickSort();
	vector->Print();
	delete vector;
	Sort vector2("15,20,25,30,25,66,8888888");
	vector2.Print();
	vector2.QuickSort();
	vector2.Print();
	Sort vector3({1,2,3,4,5,6,7,8,9,3,6,6,6});
	vector3.Print();
	vector3.Merge(vector2);
	vector3.Print();

}