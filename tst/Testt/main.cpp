#include <iostream>
using namespace std;

int gValue = 0;

class Date
{
private:
	int x, y;
public: 
	Date(int value);
	Date();
	Date(const Date& oldDate); // it s good practice to make oldDate->const
								//even is we pass a non const obj, it s promoted
								//to const ptr easily.
	//No copy CTOR means compiler will do a similar MEMCPY between obj's.
	//That means we copy the address of the pointer(when we use ptr's)
	//and NOT THE CONTENT and that s bad u know(unless this is what you want to do)

	Date(Date&& toMove);
	~Date();
	void print();
	friend void process(Date d);
	friend Date process2();
};

void process(Date d) //compiler makes a copy of d
{
	cout << "It still copies if we pass it as a non-referenced object" << endl;
}

Date process2()
{
	Date d(10); //ctor called
	cout << "When we return d from the function, acopy is made" << endl;
	return d;
}

void Date::print()
{
	cout << x << " " << y << endl;
}

Date::Date(int value) : x(value), y(value+1)
{
	gValue++;
	cout << "CTOR with int " << gValue << endl;
	print();
}

Date::Date() : Date(0)
{
	cout << "Default CTOR delegating the int value one " << gValue << endl;
	print();
}

Date::Date(const Date& oldDate)
{
	gValue++;
	x = oldDate.x;
	y = oldDate.y;
	cout << "Copy CTOR is called " << gValue << endl;
	print();
}

Date::Date(Date&& toMove) //useful for xvalues 
{
	x = toMove.x;
	y = toMove.y;
	cout << "Move CTOR is called" << endl;

}

Date::~Date()
{
	cout << "DTOR is called " << gValue << endl;
	gValue--;
}

int main()
{
	Date d(1);
	Date d2 = d;
	process(d2);
	process2().print();
	return 0;
}