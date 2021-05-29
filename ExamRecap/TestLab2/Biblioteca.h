#pragma once

#include <iostream>

#include "Revista.h"
#include "Roman.h"

class Biblioteca
{
private:
	int count;
	std::vector<Carte*> carti;

public:
	Biblioteca() :
		count(0) {}

	~Biblioteca()
	{
		for (int i = 0; i < carti.size(); i++)
			delete carti[i];
		count = 0;
	}

	Biblioteca& operator+= (Carte* newCarte);

	operator int()
	{
		return count;
	}

	void PrintFilter(bool (*comparator)(Carte* carteDePrintat))
	{
		std::cout << "Lista doar cu romane:" << std::endl;
		for (int i = 0; i < carti.size(); i++)
		{
			if (comparator)
			{
				carti[i]->GetInfo();
			}
		}
	}

	Carte* begin()
	{
		return carti[0];
	}

	Carte* end()
	{
		return carti[count - 1];
	}
};

