#pragma once
#include <sstream>
#include <string>
#include <cstdlib> 
#include <ctime> 
#include "Windows.h"
#include <iomanip>
using namespace std;
class CoinsForADollar
{
public:
	CoinsForADollar();
	~CoinsForADollar();
	void CoinsForADollar::turn();
	void CoinsForADollar::toss();
	double CoinsForADollar::getCurrentBalance();
	string CoinsForADollar::play();
private:
	int random;
	int counter = 0;
	double balance;
	string temporary[3];
};
