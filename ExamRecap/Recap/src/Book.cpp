#pragma once

#include "Product.h"
#include "Visitor.h"
#include "Pen.h"
#include "PriceVisitor.h"
#include "DetailsVisitor.h"
#include "Author.h"
#include "Book.h"

void Book::AddAuthor(Author* author)
{
	autori.push_back(author);
}

void Book::Accept(Visitor* visitor)
{
	visitor->Visit(this);
}
