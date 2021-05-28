#pragma once

#include <iostream>
#include <vector>
#include "Shape.h"

class Repo
{
private:
	std::vector<Shape*> shapes;

public:
	Shape* GetShape(std::string shapeType, std::string color);
	void Add(Shape* _shape);
	void Remove(std::string info);
	void PrintAll();
};

