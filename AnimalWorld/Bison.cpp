#include "Bison.h"
#include "AnimalWorld.h"
#include <iostream>
using namespace std;
Bison::Bison(AnimalWorld* world)
{
	weight = 10;
	isAlive = true;
	specie = new char[strlen("Bison") + 1];
	strcpy_s(specie, strlen("Bison") + 1, "Bison");
	continent = new NorthAmerica;
	world->addHerbivor(this);
}
Bison::Bison(unsigned int weigth,AnimalWorld* world)
{
	this->weight = weigth;
	isAlive = true;
	specie = new char[strlen("Bison") + 1];
	strcpy_s(specie, strlen("Bison") + 1, "Bison");
	continent = new NorthAmerica;
	world->addHerbivor(this);
}
void Bison::print()const
{
	Herbivore::print();
	continent->print();
}
Bison::~Bison()
{
	delete[]continent;
}