#include <iostream>
using namespace std;

/*class Figure
{
public:
	virtual void Draw() { cout << "figure" << endl; }
	virtual ~Figure() { cout << "delete figure" << endl; }
};

class Circle : public Figure
{
public:
	void Draw() override { cout << "circle" << endl; }
	~Circle() { cout << "delete circle" << endl; }
};

class Square : public Figure
{
public:
	void Draw() override { cout << "square" << endl; }
	~Square() { cout << "delete square" << endl; }
};

int main()
{
	Figure* f[2] = { nullptr };
	f[0] = new Circle();
	f[1] = new Square();

	for (int index = 0; index < 2; index++)
		f[index]->Draw();
	for (int index = 0; index < 2; index++)
		delete f[index];

	/*
	Any pointer to a class X which is derived from a base class
	X can convert implicitly to a base class pointer 
	*/

	/* 
	Polymorphism is very useful for plugins, addons
	*/

	/*
	If we want to override a virtual function
	one must use the SAME method signature
	*/

	/*
	Use the override keyword as a good coding practice
	
}*/

struct A
{
	virtual bool Odd(int x) = 0;
};

struct B final : public A 
	//final here means that from now on
	//NO ONE can inherit class B anymore
{
	virtual bool Odd(int x) override final { return x % 2 == 0; }
	/*
	If you add final to a method, it means that
	From now on, every class which inherits the class that has the 
	final keyword can NO LONGER override the final method

	Override means that B::Odd replaces A::Odd
	*/
};

//struct C : public B
//{
	//virtual bool Odd(int x) { return x % 3 == 0; }
//};
int main()
{
	//A* a = new C();
	A* a = new B();
	cout << a->Odd(2) << endl;
	return 0;
}
//replace odd name with even lmao