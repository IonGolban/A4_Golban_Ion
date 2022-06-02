#include "Decimal.h"

std::string Decimal::GetFormatName()
{
    return "Decimal";
}

std::string Decimal::FormatNumber(int n)
{
    return std::to_string(n);
}
