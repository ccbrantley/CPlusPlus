#pragma once
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
class Population
{
public:
	Population();
	Population(double population, double birth, double death);
	~Population();
	void Population::setPopulation(double);
	void Population::setBirth(double);
	void Population::setDeath(double);
	double Population::getPopulation();
	double Population::getBirth();
	double Population::getDeath();
	double Population::getBirthRate();
	double Population::getDeathRate();
	string Population::print();
private:
	double population, birthRate, deathRate, birth, death;
};
