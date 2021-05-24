//
// Created by andrew on 24.05.2021.
//

#ifndef TESTERONLINUX_MYCLASS_H
#define TESTERONLINUX_MYCLASS_H

#include <string>

class myClass
{
private:
	int x,y;
	std::string myString;
public:
	void setValues(int _x, int _y);
	void setString(std::string& string);
	std::string& getString();
	void print();

	//here the operators should be located
	int operator+ (const myClass& current);

};


#endif //TESTERONLINUX_MYCLASS_H
