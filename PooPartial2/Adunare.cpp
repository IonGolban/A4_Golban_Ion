#define _CRT_SECURE_NO_WARNINGS 
#include "Adunare.h"
#include <string.h>
#include <iostream>
Adunare::Adunare()
{
    this->numeOperatie =(char*) malloc(sizeof("Adunare"));
    memcpy(this->numeOperatie,"Adunare",strlen("Adunare")+1);
   // strcpy(this->numeOperatie, "Adunare");

}

char* Adunare::getNumeOperatie()
{
    return (char*)this->numeOperatie;
}

void Adunare::executaOperati(int x, int y)
{
    std::cout << "Adunare (" << x << "," << y << ") = " << x + y;
}
