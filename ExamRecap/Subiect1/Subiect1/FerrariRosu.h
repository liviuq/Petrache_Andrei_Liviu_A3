#pragma once
#include "Masina.h"
class FerrariRosu :
    public Masina
{
private:

public:
    std::string GetColor() { return "rosu"; }
    std::string GetName() { return "Ferrari"; }
};

