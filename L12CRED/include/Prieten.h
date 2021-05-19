//
// Created by andrew on 19.05.2021.
//

#ifndef L12CRED_PRIETEN_H
#define L12CRED_PRIETEN_H

#include "Contact.h"

class Prieten: public Contact
{

private:
	std::string data_nasterii;
	std::string adresa;
	std::string nr_telefon;
public:
	Prieten(std::string _nume,
		    std::string _data_nasterii,
		    std::string _adresa,
		    std::string _nr_telefon):
				Contact(_nume),
				data_nasterii(_data_nasterii),
				adresa(_adresa),
				nr_telefon(_nr_telefon){}
	std::string getAdresa();
	std::string getNrTelefon();
	std::string getServiciu();
	std::string getDataNasterii();
	std::string getType();
};

#endif //L12CRED_PRIETEN_H
