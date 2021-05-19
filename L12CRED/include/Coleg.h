//
// Created by andrew on 19.05.2021.
//

#ifndef L12CRED_COLEG_H
#define L12CRED_COLEG_H

#include "Contact.h"

class Coleg: private Contact
{
private:
	std::string serviciu;
	std::string nr_telefon;
	std::string adresa;
public:
	std::string getAdresa();
	std::string getNrTelefon();
	std::string getServiciu();
	std::string getDataNasterii();
	std::string getType();
};

#endif //L12CRED_COLEG_H
