#pragma once

#include "Product.h"
#include "Visitor.h"

class Pen : public Product
{
private:
	std::string color;
	int price;
public:

	Pen() { color = "negru"; price = 5; }
	Pen(int _price, std::string _color) :
		price(_price), color(_color) {}

	void Accept(Visitor* visitor);
	std::string GetColor() { return color; }
	int GetPrice() { return price; }
};