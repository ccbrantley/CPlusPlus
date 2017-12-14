#pragma once
#include <sstream>
#include <string>
#include <cstdlib> 
#include <ctime> 
#include "Windows.h"
using namespace std;
class CoinToss
{
public:
	CoinToss();
	void CoinToss::toss();
	string CoinToss::getSideUp();
	string CoinToss::print();
	~CoinToss();
private:
	int sideUp, random;
	string side;
};
