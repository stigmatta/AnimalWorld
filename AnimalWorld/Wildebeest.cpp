#include "Wildebeest.h"
#include "Herbivore.h"
#include "AnimalWorld.h"
#include <iostream>
using namespace std;
Wildebeest::Wildebeest(AnimalWorld* world)
{
	weight = 10;
	isAlive = true;
	specie = new char[strlen("Wildebeest") + 1];
	strcpy_s(specie, strlen("Wildebeest") + 1, "Wildebeest");
	continent = new Africa;
	world->addHerbivor(this);
}
Wildebeest::Wildebeest(unsigned int weigth, AnimalWorld* world)
{
	this->weight = weigth;
	isAlive = true;
	specie = new char[strlen("Wildebeest") + 1];
	strcpy_s(specie, strlen("Wildebeest") + 1, "Wildebeest");
	continent = new Africa;
	world->addHerbivor(this);

}

void Wildebeest::print()const
{
	Herbivore::print();
	continent->print();
}
