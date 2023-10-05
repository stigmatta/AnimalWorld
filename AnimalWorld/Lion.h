#pragma once
#include "Africa.h"
#include "Carnivore.h"
#include "AnimalWorld.h"
class Lion: public Carnivore
{
public:
	Lion(AnimalWorld* world);
	Lion(unsigned int power, AnimalWorld* world);
	void print()const;
};


