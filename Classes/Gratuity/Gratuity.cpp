#include "Gratuity.h"
Gratuity::Gratuity()
{
	this->taxRate = .065;
}
Gratuity::Gratuity(double taxRate) {
	this->taxRate = taxRate;
}
void Gratuity::setTaxRate(double taxRate) {
	this->taxRate = taxRate;
}
double Gratuity::getTaxRate() {
	return this->taxRate;
}
double Gratuity::computeTip(double total, double tipRate) {
	this->tipRate = tipRate;
	this->taxAmt = (total * taxRate);
	this->tipAmt = total * tipRate;
	this->subTotal = total - taxAmt;
	this->total = total + tipAmt;
	return this->tipAmt;
}
string Gratuity::print() {
	stringstream s;
	s << "Total: " << total << endl << "Tax Rate: " << taxRate << endl << "Tax Amount: " << taxAmt << endl << "SubTotal: " << subTotal << endl << "Tip Rate: " << tipRate << endl
		<< "Tip Amt: " << tipAmt << endl;
	return s.str();
}
Gratuity::~Gratuity()
{
}
