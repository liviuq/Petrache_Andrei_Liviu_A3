#include <iostream>
using namespace std;

class A
{
public:
	int a1, a2;
	virtual A* clone() { return new A(); }
};

class B : public A
{
public:
	int b1, b2;
	//virtual A* clone() { return new B(); }
	virtual B* clone() { return new B(); }
	//even if it s a virtual method, we can change the return type
	//other from the base class (A*)
	//we can do this ONLY If there is an inheritance relatioship
	//between them. (B inherits A) 

	//we do this because we know that
	//we return a B* 
	
};

int main()
{
	B* b = new B();
	B* ptrB;
	//ptrB = b->clone(); //can t assign A* to B*
	//ptrB = (B*)b->clone(); //we can force cast it
	//or use COVARIANCE
	ptrB = b->clone();
	/*
	covariance refers to the pointer type
	*/
	A* a = (A*)b;
	//ptrB = a->clone(); //a->clone returns A* now
							//pointer type matters
	ptrB = (B*)a->clone(); //it workd
	return 0;
}