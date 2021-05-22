#include <iostream>
using namespace std;

class Integer
{
private:
	int value;
public:
	Integer(int val) : value(val) {}
	Integer operator+ (const Integer integer); 
	Integer operator+ (float number);
	int operator ! ();

	Integer& operator = (int val);
	//friend bool operator= (Integer& i, int val);
	//the following operators
	//index, function, pointer, assign DO NOT support friend 
	//however +=, -= DO SUPPORT friend
	friend int operator+ (const Integer& i, float number);
	friend int operator+ (float number, const Integer& i);
	//Good practice: binary friend operator methods.
	void print();

	//Doesn t make sense
	//friend bool operator &= (int val, Integer i);
	//it will compile.     ^


	//Incremet post pre
	Integer& operator++();
	Integer operator++ (int value);
	//friend bool operator++ (Integer& i); prefix
	//friend bool operator++ (Integer& i, int value); postfix

	operator float(); //cannot be friend because it doesn t have a (this)
	//Integer n1(2)
	//float f = (float)n1; f=4.0f
	//OR
	//float f = n1
	//float f = n1 + 0.2f  f=4.2f
};

Integer::operator float()
{
	return float(value * 2);
}

Integer Integer::operator+ (const Integer integer)
{
	Integer temp(value + integer.value);
	return temp;
}

Integer Integer::operator+ (float number)
{
	Integer temp(value + int(number));
	return temp;
}

int Integer::operator ! ()
{
	return this->value - 10;
}

Integer& Integer::operator = (int val)
{
	value = val;
	return (*this);
	//It s reccomended to autoreturn (*this)
}

//bool operator= (Integer& i, int val)
//{
//	i.value = val;
//	return false;
//}

int operator+(const Integer& i, float number)
{
	return i.value + (int)number; //int x = i3 + 5.0f;
}

int operator+(float number, const Integer& i)
{
	return i.value + (int)number; //int x = 99.7f + i3;
}

void Integer::print()
{
	cout << value << endl;
}

//Integer& Integer::operator++ ()//preincrement
//{
//	value += 1;
//	return (*this);
//}
//
//Integer Integer::operator++ (int val) //postincrement, val is always 0
//{									//as you do n1++0, 0 is val
//	Integer tempObj(value);						//for every n1++, the compiler will push the value onto the stack
//	value += 1;						//so it s a bit slower (Not by a lot)
//	return tempObj;
//}

int main()
{
	Integer i1(100);
	Integer i2(300);
	Integer i3(50);
	Integer i4 = i2 + i1 +i3;
	i4.print();
	i4 = i4 + 7.0f;
	i4.print();
	int value = !i1;
	cout << !i1 << endl;

	i1 = 39;
	i1.print();

	Integer n1(20);
	
}
/*
If we pass a parameter without the &, we copy it and thus, just like 
the += operator, we ll modify the copy, not the actual parameter;

friend bool operator+= (integer i, int val)
{
	i.value = val;
	return true;
}

//main..
Integer n1(20)
bool res = (n1 += 30); //we copy n1 on stack, we midify the copy +30
and n1 will NOT be modified
*/

/*
y = x++ (x is a n obj) <=> y = x; x+=1;
y = ++x; <=> x+=1; y = x
*/

/*
the new operator ca also be overloaded, it is used to 
allocat memory in a specific part of the system

int globalVar[100];

Integer *n1 = new Integer, and n1 will be pointing to globalvar, if we did that
If we overload new, we have to overload the delete and throw exceptions.
*/