#include "Globals.h"
#include "string.h"

int Globals::compByName(Person* firtPerson, Person* secondPerson) {
	if (strcmp(firtPerson->getName(),secondPerson->getName())==0){
		return 0;
	}
	if (strcmp(firtPerson->getName(), secondPerson->getName()) > 0) {
		return 1;
	}
	else return -1;
}

int Globals::compByHistory(Person* firtPerson, Person* secondPerson) {
	if (firtPerson->getHistoryGrade() == secondPerson->getHistoryGrade()) {
		return 0;
	}
	if (firtPerson->getHistoryGrade() > secondPerson->getHistoryGrade()) {
		return 1;
	}
	else return -1;
}

int Globals::compByEngl(Person * firtPerson, Person * secondPerson) {
	if (firtPerson->getEnglGrade() == secondPerson->getEnglGrade()) {
		return 0;
	}
	if (firtPerson->getEnglGrade() > secondPerson->getEnglGrade()) {
		return 1;
	}
	else return -1;
}

int Globals::compByMath(Person* firtPerson, Person* secondPerson) {
	if (firtPerson->getMathGrade() == secondPerson->getMathGrade()) {
		return 0;
	}
	if (firtPerson->getMathGrade() > secondPerson->getMathGrade()) {
		return 1;
	}
	else return -1;
}

int Globals::compByAverage(Person* firtPerson, Person* secondPerson) {
	
	if (firtPerson->getAverage() == secondPerson->getAverage()) {
		return 0;
	}
	if (firtPerson->getAverage() > secondPerson->getAverage() ) {
		return 1;
	}
	else return -1;
}