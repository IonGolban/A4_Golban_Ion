#include "Biblioteca.h"
#include "Carte.h"
#include "Roman.h"
#include "Revista.h"
#include <iostream>

int main()
{
	Biblioteca b;
	b += new Roman("DON QUIJOTE", "MIGUEL DE CERVANTES");
	b += new Revista("Journal of Artificial Intelligence", 100);
	b += new Roman("MACBETH", "WILLIAM SHAKESPEARE");
	for (auto x : b)
	{
		std::cout << x->GetInfo() << std::endl;
	}
	std::cout << "Numar de intrari in biblioteca: " << (int)b << std::endl;
	std::cout << "Lista doar cu romane:" << std::endl;
	b.PrintFilter([](Carte* c)->bool {
		std::string roman = "Roman";
		std::string tip = c->GetInfo();
		for (int i = 0; i < 5; i++) {
			if (tip[i] != roman[i])return false;
		}
		return true;
		});
	return 0;
}
