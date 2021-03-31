#include <iostream>
#include "VectorTemp.h"
using namespace std;

bool ascending(int x, int y)
{
	return x > y;
}

bool descending(int x, int y)
{
	return x < y;
}

bool even(int x)
{
	return x % 3 == 0;
}

int main()
{

	VectorTemp<int> vec;
	cout << "First vec has address: " << &vec << endl;
	vec.push(1);
	vec.push(22);
	vec.push(4);
	vec.push(9);
	vec.push(3);
	vec.push(2);
	vec.push(0);
	vec.print();

	cout << vec.firstIndexOf(even) << endl;

	VectorTemp<int> vec3;
	cout << "Second vec has address: " << &vec3 << endl;
	vec3.push(4);
	vec3.push(5);
	vec3.push(6);
	vec3.print();

	vec.swapMine(vec3);
	cout << "---------------" << endl;
	vec3.print();

	cout << "Address is: " << &vec << endl;
	vec.print();


	cout << "---------------" << endl;
	cout << "\npop last element: " <<vec.pop() << endl;
	vec.print();

	cout << endl;

	vec.remove(1);
	vec.print();

	vec.insert(99, 2);
	vec.print();

	vec.insert(100, 1);
	vec.print();

	vec.sort();
	vec.print();
	cout << "The function get returned: " << vec.get(7) << endl;
	cout << "----------" << endl;
	vec.sort(ascending);
	vec.print();
	cout << "----------" << endl;
	vec.sort(descending);
	vec.print();
	cout << "----------" << endl;
	VectorTemp<char> vec2;
	vec2.push('a');
	vec2.push('z');
	vec2.push('n');
	vec2.push('u');
	vec2.push('w');
	vec2.push('i');
	vec2.push('d');
	vec2.print();
	vec2.sort();
	vec2.print();
	return 0;
}