#pragma once
#include "Carte.h"
#include <string>
class Revista :
    public Carte
{
    std::string titlu;
    int nrArticole;
public:
    Revista(std::string titlu, int nrArticole);
    std::string GetInfo();

};

