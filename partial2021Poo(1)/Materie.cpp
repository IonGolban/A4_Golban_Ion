#define _CRT_SECURE_NO_WARNINGS
#include "Materie.h"
#include <string.h>
#include "Catalog.h"
Materie::Materie()
{

}
void Materie::setNota(const int nota)
{
	this->nota = nota;
}
int Materie::getNota()
{
	return this->nota;
}
void Materie::setNumeMaterie(const char* nume)
{
	strcpy(this->numeMaterie, nume);
}

char* Materie::getNumeMaterie()
{
	return this->numeMaterie;
}
void Materie::operator = (int nota)
{
	//this->student.getMaterie().setNota(nota);
	//this->student.incrementMateriiCount();
}

void Materie::setStudent(Student* student)
{
	this->student = student;
}
