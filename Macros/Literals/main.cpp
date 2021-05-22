//Literals
// <return type> operator"" _<literal_name> (parameter_type)
//return type- any kind
//literal name - whatever name
//parameter type : const char*, unsigned longlong int
//				long double, char, wchar_t, char8_t, char16_t, char32_t
#include <iostream>
using namespace std;

/*int operator"" _baza_3(const char* x)
{
	int value = 0;
	while ((*x) != 0)
	{
		value = value * 3 + (*x) - '0';
		x++;
	}
	return value;
}
int main()
{
	int x = 121102_baza_3; //converts 121102 to int
}*/
/*
int operator"" _to_int(unsigned long long int x)
{
	return (int)x;
}
int main()
{
	unsigned long long int a;
	//int sum = a_to_int; //compiler considers a_to_int a new identifier
	//We can use literals with constant numbers or constant strings, but NOT varialbes
	int sum = 60_to_int;

	//Literals doesn t have to return a value, it can print stuff
}*/

char* operator"" _reverse(const char* sir, size_t sz) //second param must be size_t
{
	char* txt = new char[sz + 1];
	txt[sz] = 0;
	for (size_t poz = 0; poz < sz; poz++)
		txt[sz - poz - 1] = sir[poz];
	return txt;
}
int main()
{
	char* text = "c++ test today"_reverse;
	cout << text << endl;
	delete[] text;
}