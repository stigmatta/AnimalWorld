#include <iostream>
#include "Bison.h"
#include"Wildebeest.h"
#include "Continent.h"
#include"Herbivore.h"
#include "Carnivore.h"
#include"NorthAmerica.h"
#include "Africa.h"
#include "Lion.h"
#include "Wolf.h"
#include "AnimalWorld.h"
using namespace std;
unsigned int AnimalWorld:: herbCount = 0;
unsigned int AnimalWorld:: carnCount = 0;
int main()
{
	AnimalWorld animalWorld;
	Herbivore* herbivore;
	Carnivore* carnivore;
	Herbivore* herbivore2 = new Wildebeest(20,&animalWorld);
	Carnivore* carnivore3= new Wolf(25,&animalWorld);
	carnivore = new Lion(15,&animalWorld);
	herbivore = new Bison(10,&animalWorld);
	cout << AnimalWorld::herbCount << endl << AnimalWorld::carnCount << endl;
	animalWorld.callAllHerbivors();
	animalWorld.callAllCarnivors();
	animalWorld.callAllCarnivors();
	herbivore->print();
	carnivore->print();
	return 0;
}