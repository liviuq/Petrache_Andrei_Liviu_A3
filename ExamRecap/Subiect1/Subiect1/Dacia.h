#pragma once

#include "Masina.h"

class Dacia :
    public Masina
{
private:
    std::string color;

public:
    Dacia(std::string _color) : color(_color) {}

    std::string GetColor() { return color; }
    std::string GetName() { return "Dacia"; }
};

