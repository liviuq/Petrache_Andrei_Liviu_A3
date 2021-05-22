#include <iostream>
using namespace std;

class A
{
public:
	int a1 =1, a2=2, a3=3;
	virtual void Set() = 0;
};
class B : public A
{
public:
	int a1=4, a2=5, a3=6;
	void Set() { cout << "4" << endl; }
};

class C : public B
{
public:
	int a1 = 7, a2 = 8, a3 = 9;
};
int main()
{
	B b;
	cout << b.A::a1 << endl;
	C c;
	B* ptrb = &c;
	cout << ptrb->a1;
}
