#include <iostream>
using namespace std;

/*class String
{
	char* text;
	void CopyString(const char* string)
	{
		text = new char[strlen(string) + 1];
		memcpy(text, string, strlen(string) + 1);
	}
public:
	String(const char* s)
	{
		cout << "ctor" << endl;
		CopyString(s);
	}
	~String()
	{
		if (text != nullptr)
		{
			cout << "dtor" << endl;
			delete text;
		}
		else
			cout << "nothing to del" << endl;
	}
	String(const String& obj)
	{
		CopyString(obj.text);
		cout << "Copy" << endl;
	}
	String& operator = (const String& obj)
	{
		if (text != nullptr)
		{
			cout << "Clear" << endl;
			delete text;
			text = nullptr;
		}
		CopyString(obj.text);
		cout << "EQ" << endl;
		return (*this);
	}
};

String Get(const char* text)
{
	cout << "Entering get" << endl;
	String s(text);
	cout << "Exiting get" << endl;
	return s;
}*/
/*
With this code, the "C++ test" from main is allocated 3 times!
1.allocate mem main::s::text
2.all get::s::text
3.all mem temp_obj::text
4. coy string from get::s to temp_obj::text
5. free get::s
6. free main::s::text
7.copy mem from temp_obj to main::s::text
8.free temp_obj::text
9. free main::s::text

To make it efficeint, well add
1.Move CTOr
2. assign op with temp reference (&&)
*/

class String
{
	char* text;
	void CopyString(const char* string)
	{
		text = new char[strlen(string) + 1];
		memcpy(text, string, strlen(string) + 1);
	}
public:
	String(const char* s)
	{
		cout << "ctor" << endl;
		CopyString(s);
	}
	~String()
	{
		if (text != nullptr)
		{
			cout << "dtor" << endl;
			delete text;
		}
		else
			cout << "nothing to del" << endl;
	}
	String(const String& obj)
	{
		CopyString(obj.text);
		cout << "Copy" << endl;
	}
	String(String&& obj)
	{
		this->text = obj.text;
		obj.text = nullptr;
		cout << "MOVE" << endl;
	}
	String& operator = (const String& obj)
	{
		if (text != nullptr)
		{
			cout << "Clear" << endl;
			delete text;
			text = nullptr;
		}
		CopyString(obj.text);
		cout << "EQ" << endl;
		return (*this);
	}

	/*
	NEVER return a reference from the stack, UNLESS it s mandatory,
	because it can get overwritten
	*/
	String& operator= (String&& obj)
	{
		this->text = obj.text;
		cout << "EQ,move" << endl;
		obj.text = nullptr;
		return (*this);
	}
};
/*
1.alloc main::s::text
2.all mem get::s::text
3.copy ptr of ::get::s::text to temp_obj
4.make get::s::text nullptr
5.copy ptr temp_obj::temp to main::s::text
6.make temp_obj::text nullptr
7. free main::s::text

basically if we add the move ctor&& and operator= && we get only 1 copy of the text

*/
String Get(const char* text)
{
	cout << "Entering get" << endl;
	String s(text);
	cout << "Exiting get" << endl;
	return s;
}

int main()
{
	cout << "entering main" << endl;
	String s("");
	s = Get("C++ test");
	cout << "Exiting main" << endl;
}