#include <iostream>
#include "Car.h"
#include "Circuit.h"
#include "Weather.h"
#include "Dacia.h"
#include "Mazda.h"
using namespace std;

int main()
{
	Circuit c;
	c.SetLength(100);
	c.SetWeather(Weather::Rain);
	c.AddCar(new Dacia());
	c.AddCar(new Mazda());
	c.AddCar(new Dacia());
	
	//c.AddCar(new Toyota());
	//c.AddCar(new Mercedes());
	//c.AddCar(new Ford());
	//c.AddCar(new Mazda());
	//c.Race();
	c.showFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.
	c.showWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit
	cout << "-------------------------" << endl;
	c.PrintAllCars();
	return 0;
}