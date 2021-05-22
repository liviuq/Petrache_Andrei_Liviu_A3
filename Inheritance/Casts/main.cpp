#include <iostream>
using namespace std;

/*
Assume that Class A is derived from class B
If this is true, then we can convert an type A object to
an type B object

It s normal because A contains every field defined in B.

Conversion rules:
1.It s poissible to cinvert a class to any of the classes that it inherits
2.It is NOT possible to convert from a base class to one of
the classes that inherits it without an explicit cast.
3.If the cast operator is overwritten, the rules do NOT apply anymore.
*/

/*class A 
{
public:
	int a1, a2, a3;
};

class B
{
public:
	int b1, b2;
};

class C : public A, public B
{
public:
	int c1, c2;
};*/

/*int main()
{
	C* c = new C();
	B* b = &c;

	return 0;
}
offset	field  //address 10, address 14, just an exmple
10		c*------------
14		b*------	 |
			   |	 |		
30		c.a1<--+-----|
34		c.a2   |
38		c.a3   |
42		c.b1 <-|
46		c.b2
50		c.c1
54		c.c2
*/

/*
class A{public nit a1,a2,a3;}
class B{public int b1, b2};
class C:public A,B {public int c1,c2;};
int main()
{
C c;
A* a;
B* b;

a = &c; <------compiler doesn t have to add an offset because
			the c.ai fields are at the beginning
b = &c <---it adds the offset 12(sizeofA) so we land exactly
			on c.bi
			if the pointer is null(c), we ll obtain a null
}
*/
/*
C* c2;
c2 = (C*)b; we have to explicitly cast it
			VERY DANGEROUS
*/

/*
class A
{
public:
	int a1, a2, a3;
};

class B
{
public:
	int b1, b2;
};

class C : private A, private B
{
public:
	int c1, c2;
};
int main()
{
C c;
A* a = &c;	Error, casts like this can only be used
			on public inheritance
*/

//Upcast/downcast
/*class A{public ai ,i=3}
class B public A{public int bi, i=2}
class C : public B{public int ci, i=2}

main:
C object;
A* base = &object //UPCAST, from child to parent, SAFE

A object
C* child = (A*)(&object) // DOWNCAST, from parent to child, NOT SAFE


!Upcasting produces object slicing!
*/

/*
class A{public ai ,i=3}
class B public A{public int bi, i=2}
class C : public B{public int ci, i=2}
main::
C c;
B* b = (B*)((void*)(&c)); // we make b point wherever c points
						  //b points to the starting of c, we control it
OR we can use the keywor:
B* b = reinterpret_cast<B*> (&c) <=> (

We got sum moor:
1.static_cast
-safe transformation
-used forinheritance or values
-useful when we want to identify a function witha  specific set
of parameters(especially if we have multiple instances of that func
and calling it might produce ambiguity
-cannot be used in 2 classes that have no connection between(inheritance)
int x = static_cast<int>(1000) <=> mov dword ptr[x], 1000
char x = static_cast<char>(1000) <=> mov byte ptr[x], 232  ==1000%256
2.reinterpret_cast <tip*> (ptr) <=> ((tip*)((void*)ptr))
-the fastest cast(usually 2 asm instructions)
-Disadvantage: we can make casts with pointers that have no connection 
-cannot apply it on constants
-it can be used to have direct memory acces to the actual code
3.dynamic_cast
-safely for converting ptr of connected classes(inheritance)
-used especially for classes WITH VIRTUAl funcs
-conversion is done at runtime
-slowest!
-useful for plugins that it validates the data and code
4.const_cast
-used to change "const" characteristincs for an object
-used only on data of the same type(cannot convert from one to another)
-produces UNDEFINED behaviour
*/
/*
int adition(int x, int y)
{
return x+y;
}
int main()
{
	char* a = reinterpret_cast<char*> (adition) //points to the function
												//ONLY RELEASE
}
*/
/*class A
{
public:
	int a1, a2, a3;
};

class B
{
public:
	int b1, b2;
};

class C : private A, private B
{
public:
	int c1, c2;
};
int main()
{
	C c;
	A* a = reinterpret_cast<A*>(&c);
	//we can only do this because A class fields are the first
	//fields in an instance of C
	//if we wanted B* b =.. ,we d have to  manually add the offset
}*/
/*
//STATIC_CAST USEFULLNESS
int Add(int x, char y)
{
	return x + y;
}
int Add(char x, int y)
{
	return x + y;
}

int main()
{
	//int suma = Add(100, 200); //ambiguity
	int suma = static_cast<int(*) (int, char)> (Add)(100, 200);
	//This is how you explicitly say which function to use
	return 0;
}*/

/*
//DYNAMIC_CAST USEFULLNESS
class A
{
public:
	int a1, a2, a3;
};

class B
{
public:
	int b1, b2;
	virtual void f() {}
};
class C :public A, public B
{
public:
	int c1, c2;
};
int main()
{
	B b;
	//B* b = dynamic_cast<B*> (&c); //no virt funcs, works because
								  //it s a safe translation cause C inherits B
	//C* c = dynamic_cast<C*> (&b); //b is not polymorphic, i.e, there s no RTTI in B
	C* c = dynamic_cast<C*> (&b); //we added virt func, now it compiles BUT
									//c will be nullptr cause we can t
								//obtain a valid C obj from a B obj
								//(it doesn t have space for c1,c2,a1,a2,a3)

	//we can do the following
	/*
		C c;
		B* b = dunamic_cast<B*>(&c);
		C* c2 = dynamic_cast<C*>(&b); //now c2 points to c
	
}*/
/*
//CONST CAST
int main()
{
	int x = 100;
	const int* ptr = &x;
	cout << x << endl;
	int* non_const_pointer = const_cast<int*>(ptr);
	//we can transform ptr to non const
	//watch out
	//x is in local memory(stack)
	//ptr is secondary, points to a var that we know we can write to 
	*non_const_pointer = 200;
	cout << x << endl;
}*/
/*
int main()
{
	const char* txt = "c++ exam";
	char* non_const_pointer = const_cast<char*>(txt);
	non_const_pointer[0] = 'c';
	cout << non_const_pointer << endl;
	//Runtinme error
	//txt buffer is a const value which the compiler places it
	//into a memory page with no write acces
	//even tho we can compile the code, when it tries to write to
	//that memory, it ll make an exception, crash
}*/
/*
int main()
{
	const int x = 100;
	//x = 200; //can t do it cause x is const
	//theoretically we can write this
	*(const_cast<int*>(&x)) = 200;//code will compile, not crash during execution
	//but it has undefined behaviour because
	//x is const and whenever the compiler sees in the code var x, it
	//replaces it with 64h = 100(for optimization purposes)
	//we can do cout << *(const_cast<int*>(&x))<<endl;
}*/
/*
//and the most useful const cast stuff
class Test
{
public: 
	const int x;
	Test(int value):x(value) {}
	void set(int value) { *(const_cast<int*>(&x)) = value; }
};
int main()
{
	Test t(100);
	cout << t.x;
	t.set(200);
	cout << t.x;
}*/