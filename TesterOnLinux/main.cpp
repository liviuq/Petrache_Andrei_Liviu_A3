#include <iostream>

#include "myClass.h"

int main()
{
	myClass m(2,3, "hello my bro");
	std::cout << m.getString() << std::endl;
	m.setString("salutare fa nebunilor");
	std::cout << m.getString() << std::endl;

	myClass n(4,5, "this is the class n");
	std::cout << m + n << std::endl;

	myClass p(6,7, "p is a cool letter");
	std::cout << (m + n) << std::endl;

	return 0;
}
