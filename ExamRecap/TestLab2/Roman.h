#pragma once
#include <iostream>
#include <vector>

#include "Carte.h"
class Roman :
    public Carte
{
private:
    std::string nume;
    std::string autor;
    
public:
    Roman(std::string _nume, std::string _autor) :
        nume(_nume), autor(_autor) {}
    std::string GetInfo() { return "Roman " + nume + " de " + autor + "\n"; }

    
};

