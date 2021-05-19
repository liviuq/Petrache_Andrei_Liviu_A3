//
// Created by andrew on 19.05.2021.
//

#ifndef L12CRED_CONTACT_H
#define L12CRED_CONTACT_H

#include <iostream>

class Contact
{
private:
	mutable std::string name;

public:
	virtual std::string getNume()
	{
		return name;
	}
	virtual std::string getAdresa() = 0;
	virtual std::string getNrTelefon() = 0;
	virtual std::string getServiciu() = 0;
	virtual std::string getDataNasterii() = 0;
	virtual std::string getType() = 0;
};

#endif //L12CRED_CONTACT_H
