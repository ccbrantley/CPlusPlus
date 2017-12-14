#include "CoinToss.h"
#include <iostream>
CoinToss::CoinToss()
{
	CoinToss::toss();
}

void CoinToss::toss() {
	Sleep(1000);
	srand(time(0));
	this->random = rand() % 2;
	cout << random << endl;
	if (random == 0) { side = "Heads"; }
	else { side = "Tails"; }
}
string CoinToss::getSideUp() { return side; }
string CoinToss::print() {
	stringstream s;
	s << "The side up is " << side << "." << endl;
	return s.str();
}
CoinToss::~CoinToss()
{
}
