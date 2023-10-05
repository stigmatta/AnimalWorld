#include "Lion.h"
#include "Carnivore.h"
#include "AnimalWorld.h"
#include <iostream>
using namespace std;
Lion::Lion(AnimalWorld* world)
{
	power = 10;
	isAlive = true;
	specie = new char[strlen("Lion") + 1];
	strcpy_s(specie, strlen("Lion") + 1, "Lion");
	continent = new Africa;
	world->addCarnivore(this);
}
Lion::Lion(unsigned int power, AnimalWorld* world)
{
	this->power = power;
	isAlive = true;
	specie = new char[strlen("Lion") + 1];
	strcpy_s(specie, strlen("Lion") + 1, "Lion");
	continent = new Africa;
	world->addCarnivore(this);
}
void Lion::print()const
{
	Carnivore::print();
	continent->print();
}