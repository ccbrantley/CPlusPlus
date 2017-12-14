#pragma once
#include <sstream>
#include <string>
#include "Windows.h"
#include <iostream>
#include <iomanip>
using namespace std;
class UpsAndDowns
{
public:
	UpsAndDowns();
	UpsAndDowns(int, int);
	void UpsAndDowns::setUpSpace(int);
	void UpsAndDowns::setDownSpace(int);
	int UpsAndDowns::getUpSpace();
	int UpsAndDowns::getDownSpace();
	void UpsAndDowns::print();
	~UpsAndDowns();
private:
	int upSpace, downSpace;
};
