#include "CorporateSales.h"
CorporateSales::CorporateSales()
{
	division = "NULL";
	quarter1 = 0;
	quarter2 = 0;
	quarter3 = 0;
	quarter4 = 0;
	annualSales = 0;
	quarterlyAverage = 0;
}
CorporateSales::CorporateSales(string division, double quarter1, double quarter2, double quarter3, double quarter4) {
	this->division = division;
	this->quarter1 = quarter1;
	this->quarter2 = quarter2;
	this->quarter3 = quarter3;
	this->quarter4 = quarter4;
	setAnnualSalesTotal(quarter1, quarter2, quarter3, quarter4);
	setQuarterlyAverage(quarter1, quarter2, quarter3, quarter4);
}
void CorporateSales::setDivision(string division){ this->division = division; }
void CorporateSales::setQuarter1(double quarter1){ 
	this->quarter1 = quarter1;
setAnnualSalesTotal(this->quarter1, this->quarter2, this->quarter3, this->quarter4);
setQuarterlyAverage(this->quarter1, this->quarter2, this->quarter3, this->quarter4);
}
void CorporateSales::setQuarter2(double quarter2){ 
	this->quarter2 = quarter2;
	setAnnualSalesTotal(this->quarter1, this->quarter2, this->quarter3, this->quarter4);
	setQuarterlyAverage(this->quarter1, this->quarter2, this->quarter3, this->quarter4);
}
void CorporateSales::setQuarter3(double quarter3){ 
	this->quarter3 = quarter3;
	setAnnualSalesTotal(this->quarter1, this->quarter2, this->quarter3, this->quarter4);
	setQuarterlyAverage(this->quarter1, this->quarter2, this->quarter3, this->quarter4);
}
void CorporateSales::setQuarter4(double quarter4){
	this->quarter4 = quarter4;
	setAnnualSalesTotal(this->quarter1, this->quarter2, this->quarter3, this->quarter4);
	setQuarterlyAverage(this->quarter1, this->quarter2, this->quarter3, this->quarter4);
}
void CorporateSales::setAnnualSalesTotal(double quarter1, double quarter2, double quarter3, double quarter4) {annualSales = quarter1 + quarter2 + quarter3 + quarter4;}
void CorporateSales::setQuarterlyAverage(double quarter1, double quarter2, double quarter3, double quarter4) {quarterlyAverage = (quarter1 + quarter2 + quarter3 + quarter4) / 4;}
string CorporateSales::getDivision() { return division; }
double CorporateSales::getQuarter1() { return quarter1; }
double CorporateSales::getQuarter2() { return quarter2; }
double CorporateSales::getQuarter3() { return quarter3; }
double CorporateSales::getQuarter4() { return quarter4; }
double CorporateSales::getAnnualSalesTotal() { return annualSales; }
double CorporateSales::getQuarterlyAverage() { return quarterlyAverage; }
string CorporateSales::print() {
	stringstream s;
	s << division << " Annual Sales: " << annualSales << endl << "Quarterly Average: " << quarterlyAverage << endl;
	return s.str();
}
CorporateSales::~CorporateSales()
{
}
