//
// Created by andrew on 19.05.2021.
//

#ifndef L12CRED_PRIETEN_H
#define L12CRED_PRIETEN_H

#include "Contact.h"

class Prieten: private Contact
{

private:
	std::string data_nasterii;
	std::string adresa;
	std::string nr_telefon;

public:
	std::string getAdresa();
	std::string getNrTelefon();
	std::string getServiciu();
	std::string getDataNasterii();
	std::string getType();
};

#endif //L12CRED_PRIETEN_H
