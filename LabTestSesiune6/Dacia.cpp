#include "Dacia.h"

Dacia::Dacia(std::string color)
{
    this->color = color;
}

Dacia::~Dacia()
{
    color = "";
}

std::string Dacia::GetColor()
{
    return this->color;
}

std::string Dacia::GetName()
{
    return "Dacia";
}
