#pragma once
#include "Masina.h"
#include <string>
class Dacia :
    public Masina
{
    std::string color;
public:
    Dacia(std::string color);
    ~Dacia();
    std::string GetColor()override;
    std::string GetName()override;
};

