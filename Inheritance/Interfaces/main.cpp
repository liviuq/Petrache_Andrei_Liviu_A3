#include <iostream>
using namespace std;

class A
{
public:
	int a1, a2, a3;
	virtual void Set() = 0;
	//this is a virtual pure method
	//no code attached it has
	//class A now it s an abstract class 
	//i.e. a class that can t be instantiated
	//A derivation from the class A, if we want to make it an instance
	//we need to make a Set method
};

class B : public A
{
public:
	int b1, b2, b3;
	void Set() { cout << "yo" << endl; }
};

int main()
{
	//A a; //cannot be instantiated
	/*
	Very useful to force someone to implement some methods
	for plugins: you need to make sure thatt people 
	create those function, instead of leaving them by default
	*/

	B b; //we can do this because it has an implementataion for Set

	A* a; //we can do this because ptr has no instance
	//and then this a, generally, is used for an B object
	//VERY GOOD POLYMORPHISM

	//INTERFACE != Abstaract class
	//Interface has a list of methods that need to be defined in the derived class
	//An abstract class can have data members, methods, non virtual methods 
	//but it requires AT LEAST 1 virtual method

	//Abstract class with no ctor, no dtor, no data members
	//all methods are virtual pure <=> INTERFACE
	//Interfaces are made with, good code practice, structs because
	//They have bby default public
	return 0;
}