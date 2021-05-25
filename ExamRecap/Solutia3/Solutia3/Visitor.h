
#ifndef VISITOR_H_
#define VISITOR_H

#include "Book.h"
#include "Pen.h"

class Visitor
{
private:

public:
	virtual void Visit(Book* book) = 0;
	virtual void Visit(Pen* pen) = 0;
};

#endif