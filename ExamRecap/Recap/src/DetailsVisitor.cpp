#include "DetailsVisitor.h"

void DetailsVisitor::Visit(Book* book)
{
	std::cout << "Cartea are " << book->GetNrPages() << " pagini, iar autorii sunt ";
	for (auto i : book->autori)
	{
		std::cout << " \" " << i->GetFirstname() << " " << i->GetSurname() << " \"  ";
	}
	std::cout << " \" " << std::endl;
}

void DetailsVisitor::Visit(Pen* pen)
{
	std::cout << "Pixul este de culoarea " << pen->GetColor() << std::endl;
}
