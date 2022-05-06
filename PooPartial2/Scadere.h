#pragma once
#include "Operatii.h"
class Scadere :
    public Operatii
{

public: 
	Scadere();
	char* getNumeOperatie();
	void  executaOperati(int x, int y);
};

