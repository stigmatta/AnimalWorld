#include "Continent.h"
#include <iostream>
using namespace std;
Continent::Continent()
{
	continent = nullptr;
}
Continent::Continent(const char* continent)
{
	this->continent = new char[strlen(continent) + 1];
	strcpy_s(this->continent, strlen(continent) + 1, continent);
}
char* Continent::getContinent()const
{
	return continent;
}
void Continent::print()const
{
	cout << "Continent: " << continent << endl;
}

Continent::~Continent()
{
	if(continent!=nullptr)
		delete[]continent;
}