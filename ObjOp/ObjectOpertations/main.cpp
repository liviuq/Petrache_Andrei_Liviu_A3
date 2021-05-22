//if we have let s say
//Date d(10);
//Set(d,100)    it really needs the copy ctor
//d is copied byte-by-byte onto the stack if no copy ctor is present
//if we give it a reference to d, &d, only the address of d is copied onto the stack
//it s never good to copy an obj to the stack, espacially if it has a pointer in it
//because it will copy THE POINTER, not it s content

//If we return an object from a function(not a reference) 
#include <iostream>
using namespace std;

class Date
{
	int X, Y, Z, T;
public:
	Date(int value) :
		X(value),
		Y(value + 1),
		Z(value + 2),
		T(value + 3) {}
	Date(const Date& obj) { X = obj.X; }
	Date(const Date&& obj) { X = obj.X; }
	Date& operator= (const Date& d)
	{
		X = d.X;
		return (*this);
	}
	//if we add the operator= and the copy ctor, 
	//then the resultet content from the get function will no longer be copied like memcpy,
	//instead the copy ctor will be called on the temporary object Get made on the stack
	//if we have a move ctor, it will be used INSTEAD of the copy ctor as the
	//Get method returns a temporary object


	/*
	WHENEVER we deal with temporary objects, the compiler prefers 
	1. Move ctor
	2. Move assignment
	ONLY MOVE for temp obj.

	INSTEAD OF COPY CTOR

	For regular obj, the copy ctor and assignment op are prefered

	*/
	void SetX(int value) { X = value; }
};

Date Get(int value)
{
	Date d(value);
	return d;
}

int main()
{
	Date d(1);
	d = Get(100); //Get is called with a temporary stack zone and the 100
				//and the result from the stack is coped into d;
	return 0;
}