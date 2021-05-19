//
// Created by andrew on 19.05.2021.
//

#ifndef L12CRED_COLEG_H
#define L12CRED_COLEG_H

#include "Contact.h"

class Coleg: public Contact
{
private:
	std::string serviciu;
	std::string nr_telefon;
	std::string adresa;
public:
	Coleg(std::string _nume,
	      std::string _serviciu,
	      std::string _nr_telefon,
	      std::string _adresa):
			Contact(_nume),
			serviciu(_serviciu),
			nr_telefon(_nr_telefon),
			adresa(_adresa) {}
	std::string getAdresa();
	std::string getNrTelefon();
	std::string getServiciu();
	std::string getDataNasterii();
	std::string getType();
};

#endif //L12CRED_COLEG_H
