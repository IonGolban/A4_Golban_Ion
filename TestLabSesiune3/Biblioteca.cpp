#include "Biblioteca.h"
#include <iostream>
Biblioteca::Biblioteca()
{
	count = 0;
	carti = new Carte*[100];
}

Biblioteca::~Biblioteca()
{
	delete[] carti;
	count = 0;
}

void Biblioteca::operator+=(Carte* c)
{
	if(count<100)carti[count++] = c;
}

Biblioteca::operator int()
{
	return count;
}

void Biblioteca::PrintFilter(bool(fn)(Carte* c))
{
	for (int i = 0; i < count; i++) {
		if (fn(carti[i]) == true) {
			std::cout << carti[i]->GetInfo() << std::endl;
		}
	}
}
