#include "Number.h"
#include <string.h>
#include <iostream>

Number::Number(const char* value, int base) {
	this->value = new char[strlen(value)];
	memcpy(this->value, value, strlen(value)+1);
	this->base = base;
}// where base is between 2 and 16

Number::Number(int num) {
	this->value = new char[strlen(toString(num))];
	this->value = toString(num);
	this->base = 10;
}

Number::~Number() {
	
}

Number::Number(const Number& num) {//copy constructor
	this->base = num.base;
	this->value = num.value;

}
Number::Number(Number&& num) {//move constructor
	this->base = num.base;
	num.base = NULL;
	this->value = num.value;
	num.value = nullptr;
}

Number operator+ (Number n1, Number n2) {
	long long n;
	int finalBase;
	if (n1.base > n2.base) {
		finalBase = n1.base;
	}
	else finalBase = n2.base;

	n = n1.toBaseTen(n1.value, n1.base) + n2.toBaseTen(n2.value, n2.base);
	
	
	return Number(toString(n), finalBase);
}
Number operator- (Number n1, Number n2) {
	long long n;
	int finalBase;

	if (n1.base > n2.base) {
		finalBase = n1.base;
	}
	else finalBase = n2.base;
	n = n1.toBaseTen(n1.value,n1.base) - n2.toBaseTen(n2.value, n2.base);
	
	return Number(toString(n), finalBase);
}

char Number::operator[] (int i) {
	return this->value[i];
}

bool Number::operator<(Number n) {
	
	return toBaseTen(this->value, this->base) < toBaseTen(n.value, n.base);
}
bool Number::operator>(Number n) {
	return toBaseTen(this->value, this->base) > toBaseTen(n.value, n.base);
}
bool Number::operator<=(Number n) {
	return toBaseTen(this->value, this->base) <= toBaseTen(n.value, n.base);
}
bool Number::operator>=(Number n) {
	return toBaseTen(this->value, this->base) >= toBaseTen(n.value, n.base);
}
bool Number::operator==(Number n) {
	return toBaseTen(this->value, this->base) == toBaseTen(n.value, n.base);
}
//
void Number::operator-- () {
	
	for (int i = 0; i < strlen(this->value) - 1; i++) {
		this->value[i] = this->value[i + 1];
	}
	this->value[strlen(value) - 1] = '\0';

}
void Number::operator-- (int n) {
	this->value[strlen(value) - 1] = '\0';
}

void Number::operator+= (Number& n) {
	long long num;
	int finalBase;

	num = toBaseTen(n.value, n.base) + toBaseTen(this->value, this->base);

	if (this->base > n.base) finalBase = this->base;
	else finalBase = n.base;

	this->value = toString(num);
	this->base = finalBase;
}

void Number::operator= (const char* str) {
	
	memcpy(this->value, str, strlen(str)+1);
	

}
void Number::operator= (const Number& n) {
	long long num = toBaseTen(n.value , n.base);
	//realloc(this->value, strlen(fromDeci(num, this->base)));
	int finalBase = n.base > this->base ? n.base : this->base;
	this->value = fromDeci(num, finalBase);
	this->base = finalBase;
}
void Number::operator= (int n) {
	memcpy(this->value, fromDeci(n, this->base), strlen(fromDeci(n, this->base))+1);
	this->value = fromDeci(n, this->base);
}


void Number::SwitchBase(int newBase) {
	long long n;

	n = toBaseTen(this->value, this->base);
	//this->value = fromDeci(n, base);
	memcpy(this->value, fromDeci(n, newBase), strlen(fromDeci(n, newBase))+1);
	this->base = newBase;
	//this->value = fromDeci(n, newBase);
}

long long Number::toBaseTen(char* p,int base) {
	long long num=0, k = 1;
	int digit;
	for (int i = strlen(p)-1; i >= 0 ; i--) {
		num+=valToInt(p[i])*k;
		k *= base;
	}
	return num; 
}
long long Number::getBaseTen() {

	return toBaseTen(this->value, this->base);
}
int Number::valToInt(char c) {
	if (c >= '0' && c <= '9')
		return c - '0';
	else
		return c - 'A' + 10;
}
char Number::valToChar(int n) {
	if (n >= 0 && n <= 9)
		return n + '0';
	else
		return n - 10 + 'A';
}

char* Number::fromDeci( int inputNum, int base){
	char* res = new char[50];

	int i= 0; 

	while (inputNum > 0)
	{
		res[i] = valToChar(inputNum % base);
		inputNum /= base;
		i++;
	}
	res[i] = '\0';
	
	for (int i = 0; i < strlen(res) / 2; i++)
	{
		char temp = res[i];
		res[i] = res[strlen(res) - i - 1];
		res[strlen(res) - i - 1] = temp;
	}

	return res;
}

char* toString(int n) {
	char str[50]; 
	int i = 0;

	while (n != 0) {

		str[i] = n % 10 + '0';
		i++;
		n /= 10;
	}
	str[i] = '\0';
	for (int i = 0; i < strlen(str) / 2; i++)
	{
		char temp = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = temp;
	}

	return str;
}

void Number::Print() {
	for (int i = 0; i < strlen(this->value); i++) {
		printf("%c ", this->value[i]);
	}
	printf("\n");
}

int  Number::GetDigitsCount() {
	return strlen(this->value); 
}// returns the number of digits for the current number

int  Number::GetBase() {
	return this->base;
} // returns the curren