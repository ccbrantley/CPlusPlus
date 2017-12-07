#pragma once
#include <string>
using namespace std;
class Date
{
public:
	Date();
	Date(int day, int month, int year);
private:
	int month, day, year;
public:
	void Date::setDay(int);
	void Date::setMonth(int);
	void Date::setYear(int);
	int Date::getDay();
	int Date::getMonth();
	int Date::getYear();
	string Date::intDate();
	string Date::monthDate();
	string Date::dayDate();
public:
	~Date();
};

