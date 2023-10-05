#include "NorthAmerica.h"
#include "Continent.h"
#include <iostream>
using namespace std;
NorthAmerica::NorthAmerica()
{
	continent = new char[strlen("North America") + 1];
	strcpy_s(continent, strlen("North America") + 1, "North America");
	climate = new char[strlen("Mediterranean") + 1];
	strcpy_s(climate, strlen("Mediterranean") + 1, "Mediterranean");
	dominant_relief = new char[strlen("Mountains") + 1];
	strcpy_s(dominant_relief, strlen("Mountains") + 1, "Mountains");
}
char* NorthAmerica:: getClimate()const
{
	return climate;
}
char* NorthAmerica::getDominantRelief()const
{
	return dominant_relief;
}
void NorthAmerica::print()const
{
	Continent::print();
	cout << "Climate: " << climate << endl;
	cout << "Dominant relief: " << dominant_relief << endl;
}
NorthAmerica::~NorthAmerica()
{
	delete[]climate;
	delete[]dominant_relief;
}
