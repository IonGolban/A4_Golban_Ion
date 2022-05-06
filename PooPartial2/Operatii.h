#pragma once
class Operatii
{
protected:
	char* numeOperatie;
	
public :
	virtual char* getNumeOperatie() = 0;
	virtual void  executaOperati(int x, int y)= 0;
};

