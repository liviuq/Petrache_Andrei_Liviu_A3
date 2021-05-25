#pragma once
#include "Operation.h"
class Scadere :
    public Operation
{
public:
    std::string GetOperation() { return "Scadere"; }
    int result(int x, int y) { return x - y; }
};

