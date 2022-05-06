#include "Calculator.h"
#include <iostream>
#include <string.h>
Calculator::Calculator()
{
	this->countOperatii = 0;
	
}

bool Calculator::operator+=(Operatii* operatie)
{
	for (int i = 0; i < this->countOperatii; i++) {
		if (operatii[i]->getNumeOperatie() == operatie->getNumeOperatie()) {
			std::cout << "Operatie existenta";
			return false;
		}
	}
	operatii[this->countOperatii++] = operatie;
	return true;
}

void Calculator::Compute(int x , int y)
{
	for (int i = 0; i < this->countOperatii; i++) {
		this->operatii[i]->executaOperati(x, y);
	}
}

bool Calculator::operator[](const char* str)
{
	for (int i = 0; i < this->countOperatii; i++) {
		if (this->operatii[i]->getNumeOperatie() == str)return true;
	}
	return false;
}

void Calculator::operator-=(const char* nume)
{
	int poz = 0;
	for (int i = 0; i < this->countOperatii; i++) {
		if (strcmp(this->operatii[i]->getNumeOperatie(), nume)==0) {
			 poz = i;
			break;
		}
	}
	for (int i = poz ; i < this->countOperatii-1; i++) {
		this->operatii[i] = this->operatii[i+1];
	}
	
	this->countOperatii--;
}

Calculator::operator int()
{
	return this->countOperatii;
}
