#pragma once
#include "Operatii.h"
class Adunare :
    public Operatii
{

public:
	Adunare();
	char* getNumeOperatie();
	void  executaOperati(int x, int y);
};

