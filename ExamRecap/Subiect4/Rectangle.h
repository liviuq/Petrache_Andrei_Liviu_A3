#pragma once
#include "Shape.h"
class Rectangle :
    public Shape
{
private:
    std::string color;
public:
    std::string GetName() override final { return "Rectangle"; }
    std::string GetColor() { return color; }
    Rectangle(std::string _color) :
        color(_color),
        Shape("Rectangle") {}
};

