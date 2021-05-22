// #define <macro> <value>
//whenever we put the macro name in the code,
//in the preprocessing the compiler replaces(literally replaces)
//that macro with the value,just like a find and replace
//we can define stuff even in the middle of the function and
//the compiler will start and replace the macro from THAT point ON

//MULTIPLE LINE MACRO
/*
	#define PRINT\
		if(value>100) cout <<"greater"
		else cout <<"smaller"
	int main()
	{
		int value = 100;
		PRINT;
	}
*/

//UNDEF MACRO
/*
#define BUFFER_SIZE VALUE
#define VALUE		1024
char temp[BUFFER_SIZe];

#undef VALUE	

#define value		2048
char temp2[BUFFERSIZE]


Transalted:
char Temp[1024]
char temp2[2048]
*/

//MACRO FUCNTIONS
/*
#define MAX(x,y) ((x) > (y)?(x):(y))
int main()
{
	int v1, v2;
	v1 = 100;
	v2 = 200;
	int v3 = MAX(v1, v2);
}
//transalted:
int main()
{
	int v1, v2;
	v1 = 100;
	v2 = 200;
	int v3 = ((v1) > (v2) ? (v1) : (v2));
}*/

//For variadic parameters, use __VA_ARGS__ macro
//we can use # to change a parameter into it s string
/*#include <iostream>
#define CHECK(condition) \
	if(!(condition)){cout <<"the condition" << #condition << "Wasn t evaluated good";};

	CHECK(v1>v2) -> if(!(v1 > v2) ...prints "the cond.."v1>v2" wasn t ev..

	*/

//USEFUL!!!
/*
#include <iostream>
#define SUM(type)\
	type add_##type(type v1, type v2){return v1+v2;}
SUM(int);
SUM(double);
int main()
{
	int x = add_int(10, 20);
}
*/
/*
ALWAYS USE () FOR EXPRESSIONS 
ALWAYS USE {} TO CONDENSE CODE(decision statements)
DIV(x,y) x/y    NOT GOOd
DIV(x,y) ((x)/(y)) VERY GOOD
*/
