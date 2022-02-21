#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int convert(char* string) {
	int number = 0; int i = 0;
	while (string[i] != NULL)
	{
		number += (string[i] - '0');
		number *= 10;
		i++;
	}
	return number / 10;
}

int main() {
	FILE* fp = fopen("input.txt", "r");
	if (fopen_s(&fp, "input.txt", "r") != 0)
	{
		printf("Eroare. Nu am putut deschide fisierul\n");
	}
	else {
		printf("Am deschis fisierul cu success!\n");
		char myString[200];
		int numbers[200];
		int sum = 0;
		/*
		if (fgets(myString, 200, fp))
		{
			printf("Am citit din fisier: %s\n", myString);
		}
		*/
		while (fgets(myString, 200, fp))
		{
			myString[strlen(myString) - 1] = '\0';
			sum += convert(myString);
		}
		printf("%d", sum);
		fclose(fp);

	}
}