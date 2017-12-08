#include "Widget.h"
double calculateDays(int);
Widget::Widget()
{
	this->widgets = 0;
	this->days = 0;
}
Widget::Widget(int widgets ) {
	this->widgets = widgets;
	this->days = calculateDays(widgets);
}
void Widget::setWidgets(int widgets) {
	this->widgets = widgets;
	this->days = calculateDays(widgets);
}
int Widget::getWidgets() {
	return widgets;
}
double calculateDays(int widgets) {
	int original = widgets / 16;
	if (original * 16 != widgets) {return original + 1;}
	else { return original; }
}
string Widget::print() {
	stringstream s;
	s << fixed << setprecision(0);
	s << days << " days to produce " << widgets << " widgets." << endl;
	return s.str();
}

Widget::~Widget()
{
}
