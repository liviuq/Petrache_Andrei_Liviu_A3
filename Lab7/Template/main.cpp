#include <iostream>
#include "VectorTemp.h"
using namespace std;

int main()
{

	VectorTemp<int> vec;

	vec.push(1);
	vec.push(22);
	vec.push(4);
	vec.push(9);
	vec.push(3);
	vec.push(2);
	vec.push(0);
	vec.print();

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

	cout << endl;

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