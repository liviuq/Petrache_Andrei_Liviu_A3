#include <iostream>
using namespace std;

/*
protected in class inheritance means public 
for classes that inherit other base classes
*/

/*class Base
{
protected:
	int x;
};

class Derived : public Base
{
private:
	int y;
public:
	void setX(int value) 
	{
		x = value;
	}
	void setY(int value) 
	{
		y = value;
	}
};
*/
class A
{
public:
	A() { cout << "ctor A is called" << endl; }
	~A() { cout << "dtor A is called" << endl; }
};

class B : public A
{
public: 
	B() { cout << "ctor B is called" << endl; }
	~B() { cout << "dtor B is called" << endl; }
};

class C : public B, public A
{
public:
	C() { cout << "ctor C is called" << endl; }
	~C() { cout << "dtor C is called" << endl; }
};
/*
Ctor call: B,A,C
Dtor call: C,A,B

1.First from the inheritance ctors, left to right
2.ctors from the class members(class variables)
3.and last the class which inherits


Dtor:
1.the big class which inherits other base classes
2.dtor for the members of the big class
3.from right to left the classes which the big class inherits

Watch out for constructors with parameters when creating an
object that inherits some classes, the compiler
must know how is the inherited ctor will be called
*/
int main()
{
	/*Derived d;
	d.setX(100);
	//d.x = 10;
	d.setY(200);*/
	C c;
	return 0;
}