//
// Created by andrew on 19.05.2021.
//

#ifndef L12CRED_AGENDA_H
#define L12CRED_AGENDA_H

#include <vector>

#include "Contact.h"
#include "Prieten.h"

class Agenda
{
private:
	std::vector<Contact*> contacte;

public:
	void Adauga( Contact* contactNou);
	void Sterge(std::string deSters);
	Contact* Cauta( std::string deCautat);
	std::vector<Contact*> getPrieteni();
};

#endif //L12CRED_AGENDA_H
