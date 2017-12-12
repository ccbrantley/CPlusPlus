#include "Car.h"

Car::Car()
{
	this->year = 0;
	this->speed = 0;
	this->make = "NULL";
}
Car::Car(int year, int speed, string make) {
	this->year = year;
	this->speed = speed;
	this->make = make;
}
void Car::setYear(int year) { this->year = year; }
void Car::setSpeed(int speed) { this->speed = speed; }
void Car::setMake(string make) { this->make = make; }
int Car::getYear() { return year; }
int Car::getSpeed() { return speed; }
string Car::getMake() { return make; }
void Car::accelerate() {  speed += 5; }
void Car::brake() { speed -= 5; }
string Car::print() {
	stringstream s;
	s << year << " " << make << " traveling at... " << speed << " mph.";
	return s.str();
}
Car::~Car()
{
}
