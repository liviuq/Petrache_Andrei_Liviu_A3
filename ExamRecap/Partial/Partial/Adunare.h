#pragma once

#include <string>

#include "Operation.h"
class Adunare :
    public Operation
{
public:
    std::string GetOperation() { return "Adunare"; }
    int result(int x, int y) { return x + y; }
};

