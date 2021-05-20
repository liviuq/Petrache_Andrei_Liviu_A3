//
// Created by andrew on 19.05.2021.
//

#include "../include/Prieten.h"

std::string Prieten::getAdresa()
{
	return adresa;
}

std::string Prieten::getNrTelefon()
{
	return nr_telefon;
}

std::string Prieten::getServiciu()
{
	std::string tempo = "whoops";
	return tempo;
}

std::string Prieten::getDataNasterii()
{
	return data_nasterii;
}

tipContact Prieten::getType()
{
	return tipContact::_Prieten;
}