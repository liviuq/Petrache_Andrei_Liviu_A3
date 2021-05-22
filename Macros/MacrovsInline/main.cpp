#include <iostream>
using namespace std;

/*int Max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int x, y;
	x = rand();
	y = rand();
	cout << Max(x, y) << endl;
	return 0;
	//x, y pushed onto the stack, takes more time
	//stubs take too
}*/

//OPTIMISED
/*
#define Max(x,y) x > y ? x : y
int main()
{
	int x, y;
	x = rand();
	y = rand();
	cout << Max(x, y) << endl;
	return 0;
}
*/

//INLINE
inline int Max(int x, int y)
{
	/*
	inline tells the compiler that we reccomend 
	not to create a max function
	instead put it into the code
	-useful in release mode, not debug
	-RECCURSIVE is very HARD for the compiler to figure out
	*/
	return x > y ? x : y;
}
int main()
{
	int x, y;
	x = rand();
	y = rand();
	cout << Max(x, y) << endl;
	return 0;
	//x, y pushed onto the stack, takes more time
	//stubs take too
}

/*
MACRO VS INLINe
-macro replaces 100% inline replacement
-careful for what we replace
-debugginf EXTREMELY hard for multiple line macro

-inline does not guarantee replacement, compiler WILL try
-debug very easy
-inline works only on release
*/

/*class Test
{
private:
	int x;
public:
	//Class methods defined in the class are usually considered INLINE
	//VERY efficient for Getters ,write em in the class
	//One exception
	//
	void setX(int value)
	{
		x = value;
	}
	int getX() { return x; }
};*/

//VOLATILE specifier

int main()
{
	//int x = rand();
	//cout << x << endl; //x is not really necessary, we can replace it
						//with rand() in the cout directly
	//call rand, push eax, call cout;

	volatile int x = rand();
	//x is not deleted by the compiler, do NOT touch it.<=> volatile
	cout << 
	return 0;
}