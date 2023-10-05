#pragma once
#include "Herbivore.h"
#include "NorthAmerica.h"
#include "AnimalWorld.h"
using namespace std;
class Bison:public Herbivore
{
public:
	Bison(AnimalWorld*world);
	Bison(unsigned int weigth, AnimalWorld*world );
	void print()const;
	~Bison();
};

