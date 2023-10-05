#pragma once
#include "Continent.h"
class Africa:public Continent
{
protected:
	char* climate; //added this just to test virtual destructor
	char* dominant_relief;
public:
	Africa();
	char* getClimate()const;
	char* getDominantRelief()const;
	void print()const;
	~Africa();
};

