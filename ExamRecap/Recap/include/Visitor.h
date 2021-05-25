#pragma once

#include "Product.h"
#include "Book.h"
#include "Pen.h"

class Visitor
{
private:

public:
	virtual void Visit(Book* book) = 0;
	virtual void Visit(Pen* pen) = 0;
};