#pragma once
#include "Herbivore.h"
#include "Carnivore.h"
#define MAX_LEN 20
class AnimalWorld
{
private:
	Herbivore** herbArray = new Herbivore*[MAX_LEN];
	Carnivore** carnArray = new Carnivore * [MAX_LEN];
public:
	static unsigned int herbCount;
	static unsigned int carnCount;
	void addHerbivor(Herbivore* obj);
	void addCarnivore(Carnivore* obj);
	void callAllHerbivors();
	void callAllCarnivors();
};

