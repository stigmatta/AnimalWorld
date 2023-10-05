#include "Africa.h"
#include <iostream>
using namespace std;
Africa::Africa()
{
	continent = new char[strlen("Africa") + 1];
	strcpy_s(continent, strlen("Africa") + 1, "Africa");
	climate = new char[strlen("Subequatorial") + 1];
	strcpy_s(climate, strlen("Subequatorial") + 1, "Subequatorial");
	dominant_relief = new char[strlen("Plain") + 1];
	strcpy_s(dominant_relief, strlen("Plain") + 1, "Plain");
}
char* Africa::getClimate()const
{
	return climate;
}
char* Africa::getDominantRelief()const
{
	return dominant_relief;
}
void Africa::print()const
{
	Continent::print();
	cout << "Climate: " << climate << endl;
	cout << "Dominant relief: " << dominant_relief << endl;
}

Africa::~Africa()
{
	delete[]climate;
	delete[]dominant_relief;
}