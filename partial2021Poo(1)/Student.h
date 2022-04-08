#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "Materie.h"
#include <iostream>
class Student
{
	char* nume;
	Materie materie[100];
	int materiiCount;

public:
	Student();
	Student(const char* nume);
	char* getName();
	Materie& operator[] (const char* materie);
	Materie getMaterie();
	void incrementMateriiCount();
	operator float();
	void printNote();

};


