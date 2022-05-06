#pragma once
#include "Operatii.h"
class Calculator
{
	Operatii* operatii[10];
	int countOperatii;
public :
	Calculator();
	bool operator += (Operatii* operatie);
	void Compute(int x , int y);
	bool operator[](const char* str);
	void operator -=(const char* nume);
	operator int();

};

