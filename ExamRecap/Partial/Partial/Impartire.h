#pragma once
#include "Operation.h"
class Impartire :
    public Operation
{
public:
    std::string GetOperation() { return "Impartire"; }
    int result(int x, int y) { if (y != 0) return x / y; else return 0; }
};

