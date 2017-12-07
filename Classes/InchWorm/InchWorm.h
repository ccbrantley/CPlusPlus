#pragma once
#include <sstream>
#include <string>
#include <iomanip>
#include <iostream>
#include "Windows.h"
using namespace std;
class InchWorm
{
public:
	InchWorm();
	string InchWorm::firstMove(int);
	string InchWorm::secondMove(int);
	string InchWorm::thirdMove(int);
	void InchWorm::continualMove(int);
	~InchWorm();
};

