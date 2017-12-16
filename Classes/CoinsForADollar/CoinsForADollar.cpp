#include "CoinsForADollar.h"
CoinsForADollar::CoinsForADollar()
{
	this->balance = 0;
}
double CoinsForADollar::getCurrentBalance() { return this->balance; }
void CoinsForADollar::turn() {
	CoinsForADollar::toss();
	if (random == 0) {
	balance += .25;
	temporary[0] = "Heads: +.25";
	}
	else { temporary[0] = "Tails +.00"; }
	CoinsForADollar::toss();
	if (random == 0) { 
		balance += .10;
		temporary[1] = "Heads +.10";
	}
	else { temporary[1] = "Tails +.00"; }
	CoinsForADollar::toss();
	if (random == 0) {
		balance += .05;
		temporary[2] = "Heads +.05";
	}
	else { temporary[2] = "Tails +.00"; }
}
void CoinsForADollar::toss() {
	Sleep(1000);
	srand(time(0));
	this->random = rand() % 2;
}
string CoinsForADollar::play() {
	stringstream s;
	s << fixed << showpoint << setprecision(2);
	while (balance < 1) {
		counter++;
		CoinsForADollar::turn();
		s << "Round: " << counter << endl << "Quarter: " << temporary[0] << endl << "Dime: " << temporary[1] << endl <<
			"Nickel: " << temporary[2] << endl << "Balance: $" << balance << endl << endl;
		if (balance == 1) { s << "You sucessfully tossed coins for a dollar."; }
	}
	if (balance > 1) { s << "You're out of luck!"; }
	return s.str();
}
CoinsForADollar::~CoinsForADollar()
{
}
