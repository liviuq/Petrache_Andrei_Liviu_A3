#pragma once

#include <iostream>
#include <vector>

#include "Visitor.h"
#include "Author.h"

class Book : public Product
{
private:
	int nrPages;
	int price;
	

public:
	Book() { nrPages = 0; price = 0;}
	Book(int _nrPages, int _price) :
		nrPages(_nrPages), price(_price) {}

	void AddAuthor(Author* author);
	void Accept(Visitor* visitor);
	int GetNrPages() { return nrPages; }
	int GetPrice() { return price; }
	std::vector<Author*> autori;
};