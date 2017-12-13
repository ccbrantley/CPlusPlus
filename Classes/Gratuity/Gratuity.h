#pragma once
#include <string>
#include <sstream>
using namespace std;
class Gratuity
{
public:
	Gratuity();
	Gratuity(double taxRate);
	void Gratuity::setTaxRate(double);
	double Gratuity::getTaxRate();
	double Gratuity::computeTip(double, double);
	string Gratuity::print();
	~Gratuity();
private:
	double taxRate, taxAmt, tipAmt, subTotal, tipRate, total;
};
