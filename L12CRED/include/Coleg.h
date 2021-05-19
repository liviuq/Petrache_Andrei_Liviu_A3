//
// Created by andrew on 19.05.2021.
//

#ifndef L12CRED_COLEG_H
#define L12CRED_COLEG_H

#include "Contact.h"

class Coleg final: public Contact
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
	std::string getAdresa() override final;
	std::string getNrTelefon() override final;
	std::string getServiciu() override final;
	std::string getDataNasterii() override final;
	tipContact getType() override final;
};

#endif //L12CRED_COLEG_H
