#pragma once
#include "Masina.h"
class FerrariRosu :
    public Masina
{

public:
    FerrariRosu();
    ~FerrariRosu();
    std::string GetColor()override;
    std::string GetName()override;
};

