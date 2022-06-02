#pragma once
#include "Carte.h"
#include <string>
class Roman :
    public Carte
{
    std::string titlu;
    std::string autor;
public:
    Roman(std::string titlu, std::string autor);
    std::string GetInfo()override;
};

