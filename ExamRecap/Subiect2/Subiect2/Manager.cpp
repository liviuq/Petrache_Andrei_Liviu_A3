#include "Manager.h"
#include "Programator.h"

void Manager::Lucreaza()
{
    for (auto i : echipa)
    {
        std::cout << "C++" << std::endl <<"[" << i->GetNume() << "]:" << std::endl;
        i->Lucreaza();
    }
}

bool Manager::Angajeaza(Angajat* x)
{
    echipa.push_back(x);
    return true;
}

bool Manager::Concediaza(Angajat* x)
{
    int counter = 0;
    if (echipa.size() == 0)
        return false;

    for (auto i : echipa)
    {
        if (i->GetNume() == x->GetNume())
        {
            echipa.erase(echipa.begin() + counter);
            return true;
        }
        counter++;
    }
    return false;
}
