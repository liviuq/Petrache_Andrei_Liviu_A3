#pragma once
#include "Angajat.h"
class Programator :
    public Angajat
{
private:
    std::string cod;

public:

    Programator(std::string _nume, int _salariu, int _id) :
        Angajat(_nume, _salariu, _id) {}
        
    void Lucreaza();
    void Add(std::string _cod) { cod += _cod; }
    std::string GetCode() { return cod; }
};

