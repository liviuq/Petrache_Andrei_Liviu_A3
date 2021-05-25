#pragma once

#include "Visitor.h"

class DetailsVisitor : public Visitor
{
private:

public:
	void Visit(Book* book);
	void Visit(Pen* pen);
};