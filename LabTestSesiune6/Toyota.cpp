#include "Toyota.h"

Toyota::Toyota(std::string color)
{
    this->color = color;
}

Toyota::~Toyota()
{
    this->color = "";
}

std::string Toyota::GetColor()
{
    return this->color;
}

std::string Toyota::GetName()
{
    return "Toyota";
}
