#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <string.h>
#include "Materie.h"

Student::Student(const char* nume)
{
	nume = new char[strlen(nume + 1)];
	strcpy(this->nume, nume);
	this->materiiCount = 0;
}

char* Student::getName()
{
	return this->nume;
}

Materie& Student::operator[] (const char* materie) {
	this->materie[this->materiiCount].setNumeMaterie(materie);
	return this->materie[this->materiiCount];
}

Materie Student::getMaterie()
{
	return this->materie[materiiCount];
}

void Student::incrementMateriiCount()
{
	this->materiiCount++;
}

Student::operator float()
{
	
	float medie;
	int s = 0;

	for (int i = 0; i < this->materiiCount; i++) {
		s += this->materie[i].getNota();
	}
	medie = s / materiiCount;
}

void Student::printNote()
{
	for (int i = 0; i < this->materiiCount; i++) {
		std::cout << this->materie[i].getNumeMaterie() << this->materie[i].getNota()<<"\n";
	}
}



Student::Student() {}