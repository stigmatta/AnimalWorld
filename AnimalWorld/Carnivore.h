#pragma once
#include "Herbivore.h"
class Carnivore
{
protected:
	int power;
	bool isAlive;
	char* specie;
	Continent* continent;
public:
	void print()const;
	void eatHerbivore(Herbivore*& animal);
	char* getSpecie()const;
	bool getIsAlive()const;
	void setIsAlive(bool alive);
	virtual ~Carnivore() = 0;
};

