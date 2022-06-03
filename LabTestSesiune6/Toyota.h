#pragma once
#include "Masina.h"

class Toyota :
    public Masina
{

    std::string color;
public:
    Toyota(std::string color);
    ~Toyota();
    std::string GetColor()override;
    std::string GetName()override;
};

