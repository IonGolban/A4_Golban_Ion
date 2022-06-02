#include "Roman.h"

Roman::Roman(std::string titlu, std::string autor)
{
    this->titlu = titlu;
    this->autor = autor;
}

std::string Roman::GetInfo()
{
    return "Roman " + titlu + " de " + autor ;
}
