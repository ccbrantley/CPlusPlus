#include "Movie.h"
Movie::Movie()
{
	this->title = "TITLE";
	this->director = "DIRECTOR";
	this->year = "YEAR";
	this->runTime = "0:00:00";
}
Movie::Movie(string title, string director, string year, string runTime) {
	this->title = title;
	this->director = director;
	this->year = year;
	this->runTime = runTime;
}
void Movie::setTitle(string title) { this->title = title; }
void Movie::setDirector(string director) { this->director = director; }
void Movie::setYear(string year) { this->year = year; }
void Movie::setRunTime(string runTime) { this->runTime = runTime; }
string Movie::getTitle() { return this->title; }
string Movie::getDirector() { return this->director; }
string Movie::getYear() { return this->year; }
string Movie::getRunTime() { return this->runTime; }
string Movie::print() {
	stringstream s;
	s << title << " by " << director << endl << year << endl << runTime << endl;
	return s.str();
}
Movie::~Movie()
{
}
