#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <string.h>
#include <stdarg.h> 

int Math::Add(int x, int y) {
	
	return x + y;
};

int Math::Add(int x, int y, int z) {
	return x + y + z;
};


int Math::Add(double x, double y) {
	return (int)x + y;
};

int Math::Add(double x, double y, double z) {
	return (int)x + y + z;
}

int  Math::Mul(int x, int y) {
	return x * y;
}

int  Math::Mul(int x, int y , int z) {
	return x * y * z;
}

int  Math::Mul(double x, double y) {
	return (int)x * y;
}

int  Math::Mul(double x, double y, double z) {
	return (int)x * y * z;
}

int Math::Add(int count, ...) {
	int sum=0;
	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(vl, int);
	}
	va_end(vl);
	return sum;
}// sums up a list of integers

char* Math::Add(const char* x, const char* y) {
	if (x == nullptr || y == nullptr) {
		return nullptr;


	}
	int n1 = 0, n2 = 0, i = 0;
	while (x[i] != '\0' || y[i] != '\0') {
		if (x[i] != '\0')n1++;
		if (y[i] != '\0')n2++;
		++i;
	}
	char* str = new char[n1 + n2+1];
	strcpy(str, x);
	strcat(str, y);
	return str;
}