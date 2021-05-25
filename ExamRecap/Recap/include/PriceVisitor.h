#pragma once

#include "Visitor.h"

class PriceVisitor : public Visitor
{
public:
	void Visit(Book* book);
	void Visit(Pen* pen);
};