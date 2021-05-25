#pragma once

#include "Product.h"
#include "Visitor.h"
#include "Book.h"
#include "PriceVisitor.h"
#include "DetailsVisitor.h"
#include "Author.h"
#include "Pen.h"

void Pen::Accept(Visitor* visitor)
{
	visitor->Visit(this);
}
