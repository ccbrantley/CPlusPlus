#include "UpsAndDowns.h"
UpsAndDowns::UpsAndDowns()
{
	upSpace = 5;
	downSpace = 5;
}
UpsAndDowns::UpsAndDowns(int upSpace, int downSpace) {
	this->upSpace = upSpace;
	this->downSpace = downSpace;
}
void UpsAndDowns::setUpSpace(int upSpace) { this->upSpace = upSpace; }
void UpsAndDowns::setDownSpace(int downSpace) { this->downSpace = downSpace; }
int UpsAndDowns::getUpSpace() { return upSpace; }
int UpsAndDowns::getDownSpace() { return downSpace; }
void UpsAndDowns::print() {
	double tempUp = upSpace;
	double tempDown = 0;
	while (tempUp != 0 && tempDown != downSpace) {
		cout << string(tempUp, '\n');
		cout << "Up";
		cout << string(tempDown, '\n');
		cout << "Down";
		tempUp--;
		tempDown+=2;
		Sleep(1000);
		system("cls");
	}
}
UpsAndDowns::~UpsAndDowns()
{
}
