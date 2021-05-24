//
// Created by andrew on 24.05.2021.
//

#ifndef TESTERONLINUX_MYCLASS_H
#define TESTERONLINUX_MYCLASS_H

#include <cstring>

class myClass
{
private:
	int x,y;
	char* myString = nullptr;

public:
	myClass(int _x, int _y, const char* _myString):
			x(_x), y(_y)
	{
		int temp = (int)strlen(_myString);
		myString = new char[ temp + 1];
		strcpy(myString, _myString);
		myString[temp] = '\0';
	}

	myClass() = delete;

	~myClass(){ x = y = 0; delete[] myString; myString = nullptr;}

	myClass(const myClass& toCopy);
	myClass(myClass&& toMove) noexcept;

	void setValues(int _x, int _y);
	void setString(const char* _string);
	const char* getString();
	void print();

	//test to see the move ctor
	static myClass test(myClass d);

	//here the operators should be located
	int operator+ (const myClass& current);
	myClass operator> (const myClass& _myClass);
	int operator! ();

	myClass& operator= (myClass&& tempClass);
};


#endif //TESTERONLINUX_MYCLASS_H
