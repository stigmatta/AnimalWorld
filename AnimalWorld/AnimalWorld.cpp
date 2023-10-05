#include "AnimalWorld.h"
#include <iostream>
using namespace std;
void AnimalWorld::addHerbivor(Herbivore* obj)
{
	if (herbCount < MAX_LEN)
	{
		herbArray[herbCount++] = obj;
	}
}
void AnimalWorld::addCarnivore(Carnivore* obj)
{
	if (carnCount < MAX_LEN)
	{
		carnArray[carnCount++] = obj;
	}
}
void AnimalWorld::callAllHerbivors()
{
	for (int i = 0; i < herbCount; i++)
		herbArray[i]->eatGrass();
}
void AnimalWorld::callAllCarnivors()
{
	for (int i = 0; i < carnCount; i++)
	{	
		if (carnCount == 0)
		{
			cout << "No alive carnivors" << endl;
			return;
		}
		else if (herbCount == 0)
		{
			cout << "No alive herbivors" << endl;
			return;
		}
		carnArray[i]->eatHerbivore(herbArray[herbCount-1]);
		if (herbArray[herbCount-1]->getIsAlive() == 0)
		{
			herbArray[herbCount - 1] = nullptr;
			delete[]herbArray[--herbCount];
		}
		else if (carnArray[carnCount-1]->getIsAlive() == 0)
		{
			carnArray[carnCount - 1] = nullptr;
			delete[]carnArray[--carnCount];
		}
	}
}