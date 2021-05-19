//
// Created by andrew on 19.05.2021.
//

#ifndef L12CRED_CUNOSCUT_H
#define L12CRED_CUNOSCUT_H

#include "Contact.h"

class Cunoscut: public Contact
{
private:
	std::string nr_telefon;

public:
	Cunoscut(std::string _nume,
		     std::string _nr_telefon):
				Contact(_nume),
				nr_telefon(_nr_telefon) {}
	std::string getAdresa() override final;
	std::string getNrTelefon() override final;
	std::string getServiciu() override final;
	std::string getDataNasterii() override final;
	tipContact getType() override final;
};

#endif //L12CRED_CUNOSCUT_H
