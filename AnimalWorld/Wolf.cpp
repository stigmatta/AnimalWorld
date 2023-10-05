#include "Wolf.h"
#include "NorthAmerica.h"
#include "AnimalWorld.h"
#include <iostream>
Wolf::Wolf(AnimalWorld* world)
{
	power =10;
	isAlive = true;
	specie = new char[strlen("Lion") + 1];
	strcpy_s(specie, strlen("Lion") + 1, "Lion");
	continent = new NorthAmerica;
	world->addCarnivore(this);
}
Wolf::Wolf(unsigned int power, AnimalWorld* world)
{
	this->power = power;
	isAlive = true;
	specie = new char[strlen("Lion") + 1];
	strcpy_s(specie, strlen("Lion") + 1, "Lion");
	continent = new NorthAmerica;
	world->addCarnivore(this);
}
void Wolf:: print()const
{
	Carnivore::print();
	continent->print();
}