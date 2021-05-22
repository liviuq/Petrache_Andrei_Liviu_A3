#include <iostream>
using namespace std;

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

Memory looks like this

 offset	Field	C1	C2
 +0		A::a1	a	
 +4		A::a2	a
 +8		A::a3	a
 +12	B::b1		b
 +16	B::b2		b

 sizeofA = 12;
 sizeofB = 20;
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

class C : public A, B
{
public:
	int c1, c2;
};


Memory looks like this

 offset	Field	C1	C2	C3
 +0		A::a1	a		C
 +4		A::a2	a		C
 +8		A::a3	a		C
 +12	B::b1		b	C
 +16	B::b2		b	C
 +20	C::c1			c
 +24	C::c2			c
 Order is first A, then B, then C
 offset	Field	C1	C2	C3
 +0		B::b1	b		C
 +4		B::b2	b		C
 +8		A::a1		a	C
 +12	A::a2		a	C
 +16	A::a3		a	C
 +20	C::c1			c
 +24	C::c2			c
 If we swap A with B, the memory allignment changes too

 sizeofA = 12;
 sizeofB = 20;
 sizeofC = 28
*/

/*class A
{
public:
	int a1, a2, a3;
};

class B : public A
{
public:
	int b1, b2;
};

class C : public A, B
{
public:
	int c1, c2;
};


offset	Field		C1		C2		C3
 +0		A::a1		A				C
 +4		A::a2		A				C
 +8		A::a3		A				C
 +12	B::A::a1	B::A	B		C
 +16	B::A::a2	B::A	B		C
 +20	B::A::a3	B::A	B		C
 +24	B::b1				B		C
 +28	B::b2				B		C
 +32	C::c1						
 +36	C::c2

 And we get a warning:
  "C" base class A is alread=y a base class of B
  int main()
  {
	C c;
	c.a1 = 10; // ambiguu cause idk which a1
  }
  Solution: c.A::a1 = 10;
			c.B::A::a1 = 20;
This is called the diamond problem;
Solution: class B: public virtual A;
			class C:public virtual A, public B;
now the table is
 offset	Field	C1	C2
 +0		ptr Class C Variable Offset Table	->>>>>	offset	offset relative to C
 +4		B::b1	b	C								+0					0
 +8		B::b2	b	C								+4		Virtual A   20
 +12	C::c1		C
 +16	C::c2		C
 +20	A::a1	A	A		
 +24	A::A2	a	a
 +28	A::a3	a	a	
 Whenever we derive a class using virtual
 that class will be positiond last in memory allignbemnt

  Multiple inheritance is usually problematic
*/

/*
class A
class B : public virtual A
class C: public virtual A, public B

+0 ptr clas C virt members offsets ->>>same table as before
+4 +8 C::b::b1
+12+16 C::ci
+20+24+28 A::ai
*/

/*
class A
class B : public virtual A
class C: public virtual A, 
		 public virtual B

offset	field
+0		ptr class C virt memb offsets
+4		C::c1
+8		C::c2
+12+16+20		A::ai virtual A from C
+24		ptr class B virt memb offsets
+28+32	B::bi virt from C

And the virt mem offsets table
C:
offset	offset rel to C
+0						0
+4	Virtual A			12
+8	virtual B			24

B:
offset	offset rel to B
+0						0     //this is how much to substract to get
+4		Virtual A		-12		//to the beginning of the table
*/