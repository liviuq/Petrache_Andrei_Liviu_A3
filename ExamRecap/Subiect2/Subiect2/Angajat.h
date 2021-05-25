#pragma once

#include <iostream>
#include <string>

class Angajat
{
private:
	std::string nume;
	int salariu;
	int id;

public:
	Angajat(std::string _nume, int _salariu, int _id):
		nume(_nume), salariu(_salariu), id(_id){}

	std::string GetNume() { return nume; }
	int GetSalariu() { return salariu; }
	bool SetSalariu(int _salariu) { salariu = _salariu; }
	virtual void Lucreaza() = 0;

};

