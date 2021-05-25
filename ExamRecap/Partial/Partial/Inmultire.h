#pragma once
#include "Operation.h"
class Inmultire :
    public Operation
{
public:
    std::string GetOperation() { return "Inmultire"; }
    int result(int x, int y) { return x * y; }
};

