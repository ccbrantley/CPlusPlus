#pragma once
class Population
{
public:
	Population();
	Population(double population, int birth, int death);
	~Population();
	void Population::setPopulation(double);
	void Population::setBirth(int);
	void Population::setDeath(int);
	double Population::getPopulation();
	int Population::getBirth();
	int Population::getDeath();
	double Population::getBirthRate();
	double Population::getDeathRate();
private:
	double population;
	int birth, death, birthRate, deathRate;
};
