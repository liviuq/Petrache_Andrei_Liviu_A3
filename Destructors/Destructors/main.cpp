#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class String
{
public:
	char* text;
	int x;
	//char* what, * yes;
public:
	String(const char* string);
	String(const String& data);
	~String(); //it can be private
	
};

String::String(const char* string)
{
	cout << "CTOR is called" << endl;
	text = new char[strlen(string) + 1];
	x = 0;
	strcpy(text, string);
	cout << text << endl;
}

String::String(const String& data)
{
	cout << "copy CTOR is called" << endl;
	delete[] text;
	text = new char[strlen(data.text) + 1];
	strcpy(text, data.text);
	x = data.x;
}

String::~String()
{
	cout << "DTOR is called" << endl;
	delete[] text;
	text = nullptr;
}

int main()
{
	String* s1 = new String("hello");
	//String* s2 = new String("world");

	//cout << s1->x << " " << s2->x << endl;
	//s2->x = 15;
	//cout << s1->x << " " << s2->x<<endl;

	String s3 = *s1;
	cout << "s3.x = " << s3.x << " " << "s1->x = " << s1->x << endl;
	cout << "s3.text = " << s3.text << " ""s1->text = " << s1->text << endl;
	s3.x = 10; strcpy(s3.text, "hell");
	cout << "s3.x = " << s3.x << " " << "s1->x = " << s1->x << endl;
	cout << "s3.text = " << s3.text << " ""s1->text = " << s1->text << endl;
	//delete s1;
	return 0;
}

/*
The destructor is called whenever we:
1.Decalre a global variable (no pointer, String d) and the program literally ends.(it gets out of the mian func)
2.We decalre a local var(Date d) and that function where we declared d ends.
3.if we declare Date d in a scope( ex. for(....){Date d}) and we get out of the for.
4.when we allocate smth on heap and delete that object.

Objects are deleted in reverse order: dtor yes, dtor what, dtor text
If we decalre a class with some other class data members that have their own destructor and the BIG class doesn t have a destructor
the compiler will create a default ctor for the big class calling all the dtors for the class member variables.
Use the delete[] to delete an array of objects ( date *d = new DAte[5];delete[] d;)

*/