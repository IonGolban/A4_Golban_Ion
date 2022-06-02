#pragma once
#include "MasinaOras.h"
class Opel :
    public MasinaOras
{
    int capacitate;
    std::string culoare;
    int anFabricatie;
public:

    std::string getName() override;
    int getCapacitate() override;
    std::string getCuloare() override;

    void setCapacitate(int capacitate);
    void setCuloare(std::string culoare);
    void setAnFabricatie(int an);
    int getAnFabricatie();
};

