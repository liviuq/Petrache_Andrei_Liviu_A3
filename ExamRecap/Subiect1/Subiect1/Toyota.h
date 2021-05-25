#pragma once
#include "Masina.h"
class Toyota :
    public Masina
{
private:
    std::string color;

public:
    Toyota(std::string _color) :
        color(_color) {}

    std::string GetName() { return "Toyota"; }
    std::string GetColor() { return color; }
};

