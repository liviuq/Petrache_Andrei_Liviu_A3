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
	Prieten myFriend("andrew", "55555", "123455", "000000");
	myAgenda.Adauga( new Prieten("Andrew", "*insert date here *", "Somewhere in Europe", "0770000000"));
	std::vector<Contact*> myArray;
	myArray = myAgenda.getPrieteni();
	std::cout << myArray[0]->getNume();
	return 0;
}
