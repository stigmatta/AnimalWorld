#include <iostream>
#include "Bison.h"
#include"Wildebeest.h"
#include "Continent.h"
#include"Herbivore.h"
#include "Carnivore.h"
#include"NorthAmerica.h"
#include "Africa.h"
#include "Lion.h"
#include "AnimalWorld.h"
using namespace std;
unsigned int AnimalWorld:: herbCount = 0;
unsigned int AnimalWorld:: carnCount = 0;
int main()
{
	AnimalWorld animalWorld;
	Herbivore* herbivore;
	Carnivore* carnivore;
	carnivore = new Lion(15,&animalWorld);
	herbivore = new Bison(10,&animalWorld);
	animalWorld.callAllHerbivors();
	animalWorld.callAllCarnivors();
	animalWorld.callAllCarnivors();
	herbivore->print();
	carnivore->print();
	return 0;
}