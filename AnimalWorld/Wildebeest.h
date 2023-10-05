#pragma once
#include "Africa.h"
#include "Herbivore.h"
#include "AnimalWorld.h"
class Wildebeest:public Herbivore
{
public:
	Wildebeest(AnimalWorld* world);
	Wildebeest(unsigned int weigth, AnimalWorld* world);
	void print()const;
};

