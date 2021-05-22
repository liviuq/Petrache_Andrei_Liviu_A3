#include <iostream>
using namespace std;

class A
{
public:
	int a1, a2, a3;
	virtual void set() { cout << "A" << endl; }
};

class B : public A
{
public:
	int b1, b2, b3;
	void set() override { cout << "B" << endl; }
};
/*
When we use virtual, we tell the compiler this:
ATTENTION
this function belongs to the instance
*/
int main()
{
	B b;
	b.set();
	/*
	set is called from the class it s been defined in, which is B,
	if there s no set(), we go to other inherited classes
	In this case it is said that Class B hides method Set from A
	*/

	A* a = &b;
	a->set();
	return 0;
}