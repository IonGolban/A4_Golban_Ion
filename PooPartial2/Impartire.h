#pragma once
#include "Operatii.h"
class Impartire :
    public Operatii
{

public:

	Impartire();
	char* getNumeOperatie();
	void  executaOperati(int x, int y);
};

