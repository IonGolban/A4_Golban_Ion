#define _CRT_SECURE_NO_WARNINGS 
#include "Scadere.h"
#include <string.h>
#include <iostream>
Scadere::Scadere()
{
	this->numeOperatie = (char*)malloc(sizeof(char) * strlen("Scadere"));
	//memcpy(this->numeOperatie, "Scadere", sizeof(char) * strlen("Adunare"));
	strcpy(this->numeOperatie, "Scadere");
}

char* Scadere::getNumeOperatie()
{
	return this->numeOperatie;
}

void Scadere::executaOperati(int x, int y)
{
	std::cout << "Scadere (" << x << "," << y << ") = " << x - y;
}
