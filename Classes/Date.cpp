#include "Date.h"
#include <sstream>
string getTextMonth(int);
Date::Date()
{
	this->day = 1;
	this->month = 1;
	this->year = 2001;
}
Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}
void Date::setDay(int day) { this->day = day; }
void Date::setMonth(int month) { this->month = month; }
void Date::setYear(int year) { this->year = year; }
int Date::getDay() { return day; }
int Date::getMonth() { return month; }
int Date::getYear() { return year; }
string getTextMonth(int month) {
	string textName[12] = { "January", "February", "March", "April", "May", "June", "July",
	"August", "September", "October", "November", "December" };
	return textName[month];
}
string Date::intDate() {
	stringstream s;
	s << this->month << "/" << this->day << "/" << this->year;
	return s.str();
}
string Date::monthDate() {
	stringstream s;
	s << getTextMonth(this->month) << " " << this->day << ", " << this->year;
	return s.str();
}
string Date::dayDate() {
	stringstream s;
	s << this->day << " " << getTextMonth(this->month) << " " << this->year;
	return s.str();
}
Date::~Date()
{
}
