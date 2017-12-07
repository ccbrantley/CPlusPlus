#include "Report.h"
Report::Report()
{
	this->name = "ABC Industries";
	this->report = "Report";
}
Report::Report(string name, string report) {
	this->name = name;
	this->report = report;
}
void Report::setCompanyName(string name) { this->name = name; }
void Report::setReportName(string report) { this->report = report; }
string Report::getCompanyName() { return name; }
string Report::setReportName() { return report; }
string Report::singleLine() {
	stringstream s;
	s << name << ", " << report;
	return s.str();
}
string Report::expanded() {
	stringstream s;
	int i = 0;
	int k = 0;
	for (char a : name) { i++; }
	for (char a : report) { k++; }
	s << "***************************************" << endl;
	s << setw((20 + (i / 2))) << name << endl;
	s << setw(20 + (k / 2)) << report << endl;
	s << "***************************************" << endl;
	return s.str();
}
Report::~Report()
{
}
