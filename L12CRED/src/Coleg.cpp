//
// Created by andrew on 19.05.2021.
//

#include "../include/Coleg.h"

std::string Coleg::getAdresa()
{
	return adresa;
}

std::string Coleg::getNrTelefon()
{
	return nr_telefon;
}

std::string Coleg::getServiciu()
{
	return serviciu;
}

std::string Coleg::getDataNasterii()
{
	std::string tempo = "whoops";
	return tempo;
}

tipContact Coleg::getType()
{
	return tipContact::_Coleg;
}
