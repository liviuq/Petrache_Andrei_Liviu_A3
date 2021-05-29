#include <iostream>

#include "Roman.h"
#include "Revista.h"
#include "Biblioteca.h"

using namespace std;

int main()
{
    Biblioteca b;
    (b += new Roman("DON QUIJOTE", "MIGUEL DE CERVANTES")) += new Revista("Journal of Artificial Intelligence", 100);
    b += new Roman("MACBETH", "WILLIAM SHAKESPEARE");
    for (auto x : b)
    {
        std::cout << x->GetInfo() << std::endl;
    }

    std::cout << "Numar de intrari in biblioteca: " << (int)b << std::endl;
    std::cout << "Lista doar cu romane:" << std::endl;
    b.PrintFilter([](Carte* c)->bool {
        std::string temp = c->GetInfo();
        char one = 'R';
        char two = 'o';
        return (temp[0] == one  && temp[1] == two);
		/*std::string roman = "Roman";
		if (temp[0] == roman)*/
        });
    return 0;
}