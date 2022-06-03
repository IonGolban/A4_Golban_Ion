#pragma once
#include "Animal.h"
#include <string>
class Cow :
    public Animal
{
public :
	std::string GetName()override ;
	bool IsAFish() override;
	bool IsABird() override;
	bool IsAMamma() override;
};

