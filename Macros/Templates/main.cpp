#include <iostream>
using namespace std;

/*
Templates can be considered to be derived from the notion of macros,
adapted for functions and classes
Templates tell me how to build a class from a template

Templates:
1.for classes  most frequent
2.for functions

Templates work just like macros, they exist in .h MUST exist
*/
/*TEMPLATES CLASSES
	template <class T>
		return_type function_name(parameters);
or
	template <typename T>
		return_type function_name(parameters)
	
template <class T>
T Sum(T value_1, T value_2)
{
	return value_1 + value_2;
	//at least one of the return type or parameters must contain
	//a member of type T
}*/
//TEMPLATES FUCNTIONS
/*
template <class T>
T Sum(T value_1, T value_2)
{
	return value_1 + value_2;
}
int main()
{
	//double x = Sum(1.25, 2.5); //x = 3.75
	//Compiler flow:
	
	1. sees that 1.25 is double, sees that 2.5 is double
	2.so that means that T should be a double
	3. creates function double sum..
	

	//double x = Sum(1, 2.5) will not compile cause T is ambiguous int or double
	//i can write this
	//int x = Sum(1, 2); //x = 3
	//double d = Sum(1.5, 2.5); //d = 4.0
	//Compiler creates 2 Sum functions
	//One with int, and one with double

}*/
/*template <class T>
T Sum(int value_1, int value_2)
{
	return (T)(value_1 + value_2);
}
int main()
{
	//int x = Sum(1, 2); //not good
	//double d = Sum(1.2, 2.4); //not good
	int x = Sum<int>(1, 2); //good now x = 3
	double d = Sum<double>(1.2, 2.4); //good now ,d = 3.0
}*/

/*template <class T1, class T2, class T3>
T1 Sum(T2 x, T3 y)
{
	return (T1)(x + y);
}
int main()
{
	int x = Sum<int>(1, 2); //T1 is int
	double d = Sum<int, double, double>(1.4, 3.6);
}*/

/*
Function Templates can get default values
*/


//Class templates

/*
template <class T>
class MyClass{
..
};

or

template <typename T>
class MyClass{..};
*/

/*template <class T>
class Stack
{
	T list[100];
	int count;
public:
	Stack() :count(0) {}
	void Push(T value) { list[count++] = value; }
	T Pop() { return list[--count]; }
};
int main()
{
	Stack<int> s;
	s.Push(1); s.Push(2); s.Push(3);
	cout << s.Pop() << endl;
}*/

//Class templates with multiple types
/*template <class T1, class T2>
class pair
{
private:
	T1 key;
	T2 value;
public:
	pair(const T1& v1, const T2& v2) : key(v1), value(v2) {}
	pair() : key(T1()), value(T2()) {}
	void setKey(const T1& value) { key = value; }
	void setValue(const T2& val) { value = val; }
};

int main()
{
	pair<const char*, int> p;
	p.setKey("exam grade");
	p.setValue(10);
	pair<const char*, int> p1("examgrade", 10);
}*/
/*

 template <class T>
class Stack
{
..
	void Push(T* value) { list[count++] = (*value); }
	T& Pop() { return list[--count]; }
};

template <class T1, class T2>
class pair
{
..
};
int main()
{
	Stack<Pair<const char*, int>> s;
	s.Push(new Pair<<const char*, int>("asmgrade",10);
}
*/

/*
//Macro+template!!!
#define P(k,v) new Pair<const char*, int>(k,v)
#define Stack MyStack<Pair<const char*, int>>
template <class T>
class Stack
{
	..
		void Push(T* value) { list[count++] = (*value); }
	T& Pop() { return list[--count]; }
};

template <class T1 = int (default stuff and you write P<> p for default), class T2>
class pair
{
	..
};
int main()
{
	Stack s;
	s.Push(P("asmgrade", 10));
}*/