//
// Created by andrew on 19.05.2021.
//

#include "../include/Agenda.h"
#include "../include/Prieten.h"

void Agenda::Adauga(Contact *contactNou)
{
	contacte.push_back(contactNou);
}

void Agenda::Sterge(std::string deSters)
{
	int i;
	for(i = 0; i < contacte.size(); i++)
	{
		if( contacte[i]->getNume() == deSters)
			break;
	}
	contacte.erase( contacte.begin() + i);
}

Contact *Agenda::Cauta(std::string deCautat)
{
	for(int i = 0; i < contacte.size(); i++)
	{
		if(contacte[i]->getNume() == deCautat)
			return contacte[i];
	}

	return nullptr;
}

std::vector<Prieten*> Agenda::getPrieteni()
{

}

