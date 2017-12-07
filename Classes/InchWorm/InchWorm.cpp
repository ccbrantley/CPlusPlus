#include "InchWorm.h"
InchWorm::InchWorm()
{
}
string InchWorm::firstMove(int times) {
	stringstream s;
	s << string(times, ' ') << setw(10) << right << "\\/" << endl;
	s << string(times, ' ') << setw(10) << right << "00" << endl;
	s << string(times, ' ') << "~OOOOOOOOO";
	return s.str();
}
string InchWorm::secondMove(int times) {
	stringstream s;
	s << string(times, ' ') << setw(10) << right << "\\/" << endl;
	s << string(times, ' ') << right << setw(6) << "O" << setw(4) << "00" << endl;
	s << string(times, ' ') << "~OOOO OOOO";
	return s.str();
}
string InchWorm::thirdMove(int times) {
	stringstream s;
	s << string(times, ' ') << setw(10) << "\\/" << endl;
	s << string(times, ' ') << setw(7) << right << "OOO" << setw(3) << "00" << endl;
	s << string(times, ' ') << "~OOO   OOO";
	return s.str();
}
void InchWorm::continualMove(int times) {
	string a = " ";
	for (int i = 0; i < times; i++) {
		cout << firstMove(i) << endl;
		Sleep(500);
		system("cls");
		cout << secondMove(i) << endl;
		Sleep(500);
		system("cls");
		cout << thirdMove(i) << endl;
		Sleep(500);
		system("cls");
	}
}

InchWorm::~InchWorm()
{
}
