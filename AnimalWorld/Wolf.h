#pragma once
#include "NorthAmerica.h"
#include "Carnivore.h"
#include "AnimalWorld.h"
class Wolf : public Carnivore
{
public:
	Wolf(AnimalWorld* world);
	Wolf(unsigned int power, AnimalWorld* world);
	void print()const;
};


