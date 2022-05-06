#define _CRT_SECURE_NO_WARNINGS 
#include "Inmultire.h"
#include <string.h>
#include <iostream>
Inmultire::Inmultire()
{
	this->numeOperatie = (char*)malloc(sizeof(char) * strlen("Inmultire"));
	strcpy(this->numeOperatie, "Inmultire");
}

char* Inmultire::getNumeOperatie()
{
	return this->numeOperatie;
}

void Inmultire::executaOperati(int x, int y)
{
	std::cout<< "Inmultire (" << x << "," << y << ") = " << x * y;
}
