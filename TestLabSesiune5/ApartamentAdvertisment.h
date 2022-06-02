#pragma once
#include "Advertisment.h"
class ApartamentAdvertisment :
    public Advertisment
{
    int atLevel;
public:
    ApartamentAdvertisment(int surface, int price, int lvl);
    void SetLevel(int lvl);
    void PrintInfo()override;

};