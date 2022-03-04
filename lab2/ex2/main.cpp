#include "Person.h"
#include "Globals.h"
#include <stdlib.h>
#include <stdio.h>

int main() {

	Person p1;
	Person p2;

	p1.setName((char *)"Person1");
	p2.setName((char *)"Person2");

	p1.setMathGrade(6.5);
	p2.setMathGrade(8);

	p1.setHistoryGrade(7);
	p2.setHistoryGrade(6.5);

	p1.setEnglGrade(9.5);
	p2.setEnglGrade(8.5);
	
	Globals comparator;
	printf("%d\n", comparator.compByName(&p1, &p2));	//se va afisa -1 (p1<p2)
	printf("%d\n", comparator.compByMath(&p1, &p2));	//se va afisa -1 
	printf("%d\n", comparator.compByEngl(&p1, &p2));	//se va afisa 1(p1>p2)
	printf("%d\n", comparator.compByHistory(&p1, &p2));	//se va afisa 1
	printf("%d\n", comparator.compByAverage(&p1, &p2));	//se va afisa 0 (p1=p2)
	


	return 0;
}