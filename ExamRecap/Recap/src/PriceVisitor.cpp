#include "PriceVisitor.h"

void PriceVisitor::Visit(Book* book)
{
	std::cout << "Pretul cartii este de " << book->GetPrice() << " lei" << std::endl;
}

void PriceVisitor::Visit(Pen* pen)
{
	std::cout << "Pretul pixului este de " << pen->GetPrice() << " lei" << std::endl;
}
