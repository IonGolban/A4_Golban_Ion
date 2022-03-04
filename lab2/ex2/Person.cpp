#include "Person.h"
#include <stdio.h>
#include<string.h>

void Person::setName(char* name) {
	strcpy_s(this->name, 20, name);
}

char* Person::getName() {
	return this->name;
}

void Person::setMathGrade(float grade) {
	if (grade < 1 && grade>10) {
		printf("the grade is too big");
	}
	else this->mathGrade = grade;
}

float Person::getMathGrade() {
	return this->mathGrade;
}

void Person::setEnglGrade(float grade) {
	if (grade < 1 && grade>10) {
		printf("the grade is too big");
	}
	else this->englGrade = grade;
}

float Person::getEnglGrade() {
	return this->englGrade;
}

void Person::setHistoryGrade(float grade) {
	if (grade < 1 && grade>10) {
		printf("the grade is too big");
	}
	else this->historyGrade = grade;
}

float Person::getHistoryGrade() {
	return this->historyGrade;
}

float Person::getAverage() {
	return (this->getEnglGrade() + this->getMathGrade() + this->getHistoryGrade()) / 3;
}


Person::Person() {
	this->englGrade = 0;
	this->historyGrade = 0;
	this->mathGrade = 0;
}
