#include "Herbivore.h"
#include <iostream>
using namespace std;
void Herbivore::eatGrass()
{
	if (!isAlive)
	{
		cout << "This " << specie << " is dead.It can`t eat grass" << endl;
		return;
	}
	weight += 10; 
}
char* Herbivore::getSpecie()const
{
	return specie;
}
bool Herbivore::getIsAlive()const
{
	return isAlive;
}
void Herbivore::setIsAlive(bool alive)
{
	isAlive = alive;
}
void Herbivore:: print()const
{
	cout << "Weight: " << weight << endl;
	cout << "Is alive? " <<boolalpha<< isAlive << endl;
	cout << "Specie: " << specie << endl;
}

unsigned int Herbivore:: getWeight()const
{
	return weight;
}
Herbivore::~Herbivore()
{
	delete[]specie;
}

