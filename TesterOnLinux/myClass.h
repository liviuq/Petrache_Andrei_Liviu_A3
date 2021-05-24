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
	char*  myString;
public:
	myClass(int _x, int _y, const char* _myString):
			x(_x), y(_y)
	{
		int temp = strlen(_myString);
		myString = new char[ temp + 1];
		strcpy(myString, _myString);
		myString[temp] = '\0';
	}

	myClass() = delete;

	~myClass(){ x = y = 0; delete[] myString; myString = nullptr;}

	//myClass(const myClass& toCopy);
	//myClass(const myClass&& toMove);

	void setValues(int _x, int _y);
	void setString(const char* _string);
	const char* getString();
	void print();

	//here the operators should be located
	int operator+ (const myClass& current);

};


#endif //TESTERONLINUX_MYCLASS_H
