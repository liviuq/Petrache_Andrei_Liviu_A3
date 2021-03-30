#include <iostream>
using namespace std;

float operator"" _Kelvin(const char* temp)
{
    return(atof(temp) - 273.15f);
}

float operator"" _Fahrenheit(const char* temp)
{
    return(((atof(temp) - 32.0f) * 10.0f) / 18.0f);
}

int main()
{

    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    cout << a << " " << b << endl;
    return 0;
}