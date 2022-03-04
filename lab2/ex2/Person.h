#pragma once
class Person
{
private :
	char name[20];
	float mathGrade;
	float englGrade;
	float historyGrade;
public:
	Person();

	void setName(char* name);
	char* getName();

	void setMathGrade(float grade);
	float getMathGrade();

	void setEnglGrade(float grade);
	float getEnglGrade();
	
	void setHistoryGrade(float grade);
	float getHistoryGrade();

	float getAverage();
	
};

