#include "Population.h"
Population::Population()
{
	this->population = 2;
	this->birth = 0;
	this->death = 0;
	this->birthRate = this->birth / this->population;
	this->deathRate = this->death / this->population;
}
Population::Population(double population, double birth, double death) {
	this->population = population;
	this->birth = birth;
	this->death = death;
	this->birthRate = this->birth / this->population;
	this->deathRate = this->death / this->population;
}
void Population::setPopulation(double population) { 
	this->population = population;
	this->birthRate = this->birth / this->population;
	this->deathRate = this->death / this->population;
}
void Population::setBirth(double birth) { 
	this->birth = birth;
	this->birthRate = this->birth / this->population;
}
void Population::setDeath(double death) { 
	this->death = death;
	this->deathRate = this->death / this->population;
}
double Population::getPopulation() { return population; }
double Population::getBirth() { return this->birth; }
double Population::getDeath() { return this->death; }
double Population::getBirthRate() { return this->birth / this->population; }
double Population::getDeathRate() { return this->death / this->population; }
string Population::print() {
	stringstream s;
	s << fixed << setprecision(2) << showpoint;
	s << "Population: " << population << endl << "Births: " << birth << endl << "Deaths: " << death << endl <<
		"Birth Rate: " << this->birthRate << endl << "Death Rate: " << deathRate << endl;
	return s.str();
}
Population::~Population()
{
}
