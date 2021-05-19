//
// Created by andrew on 19.05.2021.
//

#ifndef L12CRED_CUNOSCUT_H
#define L12CRED_CUNOSCUT_H

#include "Contact.h"

class Cunoscut: private Contact
{
private:
	std::string nr_telefon;

public:
	std::string getAdresa();
	std::string getNrTelefon();
	std::string getServiciu();
	std::string getDataNasterii();
	std::string getType();
};

#endif //L12CRED_CUNOSCUT_H
