//
// Created by andrew on 19.05.2021.
// I have to see how the includes work with CLion
//
//
#ifndef L12CRED_CONTACT_H
#define L12CRED_CONTACT_H

#include <iostream>

enum tipContact
{
	_Prieten,
	_Coleg,
	_Cunoscut
};

class Contact
{
private:
	std::string name;

public:
	Contact(std::string _name): name(_name){}
	virtual std::string getNume()
	{
		return name;
	}
	virtual std::string getAdresa() = 0;
	virtual std::string getNrTelefon() = 0;
	virtual std::string getServiciu() = 0;
	virtual std::string getDataNasterii() = 0;
	virtual tipContact getType() = 0;
};

#endif //L12CRED_CONTACT_H
