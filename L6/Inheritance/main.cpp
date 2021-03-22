#include <iostream>
#include "Car.h"
#include "Circuit.h"
#include "Weather.h"
#include "Dacia.h"
using namespace std;

int main()
{
	Circuit c;
	cout <<"XXXXXXXX " <<  &c << endl;
	c.SetLength(100);
	c.SetWeather(Weather::Rain);
	c.Print();
	c.AddCar(new Dacia());
	c.Print();
	c.AddCar(new Dacia());
	c.Print();
	//Circuit c2 = c;
	//cout << &c2 << endl;
	//c2.Print();
	//c2.AddCar(new Dacia());
	//c2.AddCar(new Dacia());
	//c2.Print();
	//cout <<"XXXXXXXX "<< &c << " " << &c2 << endl;
	//c.AddCar(new Toyota());
	//c.AddCar(new Mercedes());
	//c.AddCar(new Ford());
	//c.AddCar(new Mazda());
	//c.Race();
	//c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.
	//c.ShowWhoDidNotFinis(); // it is possible that some cars don't have enough fuel to finish the circuit
	return 0;
}