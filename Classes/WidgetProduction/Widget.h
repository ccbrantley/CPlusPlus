#pragma once
#include <sstream>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
class Widget
{
public:
	Widget();
	Widget(int widgets);
	void Widget::setWidgets(int);
	int Widget::getWidgets();
	string Widget::print();
private:
	int widgets;
	double days;
public:
	~Widget();
};

