#include "Hexazecimal.h"

std::string Hexazecimal::GetFormatName()
{
    return "Hexazecimal";
}

std::string Hexazecimal::FormatNumber(int n)
{
    int temp = 0;
    char hex[100];
    std::string finalString;
    while (n> 0)
    {
        switch (n % 16)
        {
        case 10:
            hex[temp] = 'A'; break;
        case 11:
            hex[temp] = 'B'; break;
        case 12:
            hex[temp] = 'C'; break;
        case 13:
            hex[temp] = 'D'; break;
        case 14:
            hex[temp] = 'E'; break;
        case 15:
            hex[temp] = 'F'; break;
        default:
            hex[temp] = (n % 16) + 0x30;
        }
        n = n/ 16;
        temp++;
    }
    for (int j = temp - 1; j >= 0; j--)
        finalString = finalString + hex[j];
    return finalString;
}
