#define _CRT_SECURE_NO_WARNINGS 
#include "Impartire.h"
#include <string.h>
#include <iostream>
Impartire::Impartire()
{
	this->numeOperatie = (char*)malloc(sizeof("Impartire"));
	strcpy(this->numeOperatie, "Impartire");
}

char* Impartire::getNumeOperatie()
{
	return this->numeOperatie;
}

void Impartire::executaOperati(int x, int y)
{
	std::cout << "Impartire(" << x << "," << y << ") = " << x / y;
}
