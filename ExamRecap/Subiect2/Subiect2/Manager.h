#pragma once

#include <iostream>
#include <vector>

#include "Angajat.h"
class Manager :
    public Angajat
{
private:
    std::vector<Angajat*> echipa;
    std::string numeEchipa;

public:
    Manager(std::string _numeEchipa, std::string _nume, int _salariu, int _id) :
        numeEchipa(_numeEchipa),
        Angajat(_nume, _salariu, _id) {}

    void Lucreaza();
    bool Angajeaza(Angajat* x);
    bool Concediaza(Angajat* x);
    Angajat& GetAngajat(int id);

};

