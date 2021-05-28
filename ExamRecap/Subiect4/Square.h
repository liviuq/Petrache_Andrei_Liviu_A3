#pragma once
#include "Shape.h"
class Square :
    public Shape
{
private:
    std::string color;

public:
    std::string GetName() override final { return "Square"; }
    std::string GetColor() { return color; }
    Square(std::string _color) :
        color(_color),
        Shape("Square") {}
};

