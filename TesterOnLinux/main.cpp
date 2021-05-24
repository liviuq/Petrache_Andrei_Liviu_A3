#include <iostream>

#include "myClass.h"

int main()
{
	myClass m;
	m.setValues(2,3);
	std::string temp = "salutare";
	m.setString(temp);
	m.print();
	std::cout << m.getString() << std::endl;

	myClass n;
	n.setValues(4,5);
	std::cout << m + n << std::endl;

	myClass p;
	p.setValues(6,7);
	std::cout << (m + n) << std::endl;
	return 0;
}
