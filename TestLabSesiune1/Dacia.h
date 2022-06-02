#pragma once
#include "MasinaOras.h"
class Dacia :
    public MasinaOras
{
    int capacitate;
    std::string culoare;
public:
    std::string getName() override;
    int getCapacitate() override;
    std::string getCuloare() override;

    void setCapacite(int capacitate);
    void setCuloare(std::string culoare);
};

