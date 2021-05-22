#include <iostream>
using namespace std;

class MyData
{
	float value;
public:
	void SetValue(float val) { value = val; }
};

class Integer
{
	MyData data;
public:
	MyData* operator-> ();
	//good for iterators and templates
	//It is applied on an OBJECT, not a pointer
	//can t be friend 
};

MyData* Integer::operator->()
{
	return &data;
}

int main()
{
	Integer n1;
	n1->SetValue(100);
}