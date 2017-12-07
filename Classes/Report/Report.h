#pragma once
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
class Report
{
public:
	Report();
	Report(string name, string report);
private:
	string name, report;
public:
	void Report::setCompanyName(string);
	void Report::setReportName(string);
	string Report::getCompanyName();
	string Report::setReportName();
	string Report::singleLine();
	string Report::expanded();

	~Report();
};

