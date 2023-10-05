#pragma once
#include "Continent.h"
class Herbivore
{
protected:
	int weight;
	bool isAlive;
	char* specie;
	Continent* continent;
public:
	void eatGrass();
	void print()const;
	char* getSpecie()const;
	bool getIsAlive()const;
	void setIsAlive(bool alive);
	unsigned int getWeight()const;
	virtual ~Herbivore() = 0;
};

