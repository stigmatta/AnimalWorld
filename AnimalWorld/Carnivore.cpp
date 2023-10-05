#include "Carnivore.h"
#include <iostream>
using namespace std;
void Carnivore::print()const
{
	if (this == nullptr)
	{
		cout << "This specie isn`t exist or dead" << endl;
		return;
	}
	cout << "Specie: " << specie << endl;
	cout << "Power: " << power << endl;
	cout << "Is alive? " << boolalpha << isAlive << endl<<endl;
}
char* Carnivore:: getSpecie()const
{
	return specie;
}

void Carnivore::setIsAlive(bool alive)
{
	isAlive = alive;
}
bool Carnivore::getIsAlive()const
{
	return isAlive;
}

void Carnivore::eatHerbivore(Herbivore*& animal)
{
	if (power <= 0)
	{
		cout << "This " << specie << " is dead.It can`t eat other species" << endl;
		return;
	}
	if (power > animal->getWeight())
	{
		power += 10;
		animal->setIsAlive(false);
	}
	else
	{
		power -= 10;
		if (power <= 0)
		{
			setIsAlive(false);
		}
	}
}
Carnivore::~Carnivore()
{
	delete[]specie;
}