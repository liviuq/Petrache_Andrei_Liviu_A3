#pragma once
#include "Carte.h"
class Revista :
    public Carte
{
private:
    std::string titlu;
    int nrArticole;

public:
    Revista(std::string _titlu, int _nrArticole) :
        titlu(_titlu), nrArticole(_nrArticole) {}

    std::string GetInfo()
    {
        std::string temp = "Revista " + titlu + " cu ";
        std::cout << nrArticole << " ";
        temp += " articole\n";
        return temp;
    }
};

