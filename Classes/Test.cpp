#include <iostream>
#include "Date.h"
using namespace std;
int main() {
	cout << "Hello World" << endl;
	Date time = Date();
	cout << time.intDate() << endl;
	cout << time.monthDate() << endl;
	cout << time.dayDate() << endl;
	system("pause");
	return 0;
}
