#pragma once
#include <string>
#include <sstream>
using namespace std;
class CorporateSales
{
public:
	CorporateSales();
	CorporateSales(string, double, double, double, double);
	void CorporateSales::setDivision(string);
	void CorporateSales::setQuarter1(double);
	void CorporateSales::setQuarter2(double);
	void CorporateSales::setQuarter3(double);
	void CorporateSales::setQuarter4(double);
	void CorporateSales::setAnnualSalesTotal(double, double, double, double);
	void CorporateSales::setQuarterlyAverage(double, double, double, double);
	string CorporateSales::getDivision();
	double CorporateSales::getQuarter1();
	double CorporateSales::getQuarter2();
	double CorporateSales::getQuarter3();
	double CorporateSales::getQuarter4();
	double CorporateSales::getAnnualSalesTotal();
	double CorporateSales::getQuarterlyAverage();
	string CorporateSales::print();
	~CorporateSales();
private:
	string division;
	double quarter1, quarter2, quarter3, quarter4, annualSales, quarterlyAverage;
};
