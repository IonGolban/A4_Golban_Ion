#pragma once
#include "Operatii.h"
class Inmultire :
    public Operatii
{

public:
	Inmultire();
	char* getNumeOperatie();
	void  executaOperati(int x, int y);
};

