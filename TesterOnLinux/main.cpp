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

	myClass q = myClass(10,11, "Salutare");
	q.print();

	myClass r  = myClass::test(q);
	r.print();

	(m > n).print();

	std::cout << !p << std::endl;

	myClass* ptr = new myClass(100,200,"with new operator");
	ptr->print();
	delete ptr;
	return 0;
}
