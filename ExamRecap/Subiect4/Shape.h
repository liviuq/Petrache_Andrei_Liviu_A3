#pragma once

#include <iostream>

class Shape
{
private:
	std::string name;

public:
	virtual std::string GetName() = 0;
	virtual std::string GetColor() = 0;

	Shape(std::string _name) :
		name(_name) {}

};