#pragma once
#include <string>
#include <sstream>
using namespace std;
class Car
{
public:
	Car();
	Car(int, int, string);
	void Car::setYear(int);
	void Car::setSpeed(int);
	void Car::setMake(string);
	int Car::getYear();
	int Car::getSpeed();
	string Car::getMake();
	void Car::accelerate();
	void Car::brake();
	string Car::print();
	~Car();

private:
	int year, speed;
	string make;
};

