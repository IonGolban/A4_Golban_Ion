#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4969)
#include "Student.h"
class Materie
{

	char* numeMaterie;
	int nota;
	Student* student;
public:

	Materie();
	void setNota(const int nota);
	int getNota();
	void setNumeMaterie(const char* nume);
	char* getNumeMaterie();
	void operator = (const int);
	void setStudent(Student* student);
};

