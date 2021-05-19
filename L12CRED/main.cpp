#include <iostream>
#include <string>

#include "include/Contact.h"
#include "include/Coleg.h"
#include "include/Cunoscut.h"
#include "include/Prieten.h"
#include "include/Agenda.h"

int main()
{
	Agenda myAgenda;

	myAgenda.Adauga( new class Prieten("Andrew", "06/21/1999", "Iasi", "0770000000"));
	std::vector<Contact*> myArray;
	myArray = myAgenda.getPrieteni();
	std::cout << myArray[0]->getNume();
	return 0;
}
