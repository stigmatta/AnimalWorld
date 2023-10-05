#pragma once
#include "Continent.h"
class NorthAmerica:public Continent
{
protected:
	char* climate; //added this just to test virtual destructor
	char* dominant_relief;
public:
	NorthAmerica();
	char* getClimate()const;
	char* getDominantRelief()const;
	void print()const;
	~NorthAmerica();
};

