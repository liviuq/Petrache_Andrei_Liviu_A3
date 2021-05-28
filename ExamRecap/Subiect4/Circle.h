#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
private:
    std::string color;
public:
    std::string GetName() override final{ return "Circle"; }
    std::string GetColor() { return color; }
    Circle(std::string _color) :
        color(_color),
        Shape("Circle") {}
};

