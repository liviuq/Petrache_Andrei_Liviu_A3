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

	myAgenda.Adauga( new Prieten("Andrew", "06/21/1999", "Iasi", "0770000000"));

	return 0;
}
