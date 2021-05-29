#include "Biblioteca.h"

Biblioteca& Biblioteca::operator+=(Carte* newCarte)
{
    carti.push_back(newCarte);
    count++;
    return (*this);
}
