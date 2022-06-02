#pragma once
#include "Carte.h"
class Biblioteca
{
	Carte** carti;
	int count;
public:
	Biblioteca();
	~Biblioteca();
	void operator += (Carte* c);
	Carte** begin() { return &carti[0]; };
	Carte** end() { return &carti[count]; };
	operator int();
	void PrintFilter(bool(fn)(Carte* c));
};

