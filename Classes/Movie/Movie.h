#pragma once
#include <sstream>
#include <string>
using namespace std;
class Movie
{
public:
	Movie();
	Movie(string title, string director, string year, string runTime);
	void Movie::setTitle(string);
	void Movie::setDirector(string);
	void Movie::setYear(string);
	void Movie::setRunTime(string);
	string Movie::getTitle();
	string Movie::getDirector();
	string Movie::getYear();
	string Movie::getRunTime();
	string Movie::print();
	~Movie();
private:
	string title, director, year, runTime;
};
