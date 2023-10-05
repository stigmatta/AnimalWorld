#pragma once
class Continent
{
protected:
	char* continent;
public:
	Continent();
	Continent(const char* continent);
	char* getContinent()const;
	void print()const;
	virtual ~Continent() = 0;
};

