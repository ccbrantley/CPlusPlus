#include <iostream>
using namespace std;
double presentValue(double, double, double);
int main() {
	cout << "This program will help determine initial investments in saving accounts." << endl;
	cout << "Years of Growth: ";
	double passTime;
	cin >> passTime;
	cout << "Desired Future Value: ";
	double futureValue;
	cin >> futureValue;
	cout << "Annual Interest Rate: ";
	double interestRate;
	cin >> interestRate;
	if (interestRate > 1) { interestRate /= 100; }
	double passGrowth = presentValue(passTime, futureValue, interestRate);
	cout << "Initial Investment: " << passGrowth << endl;
	system("pause");
	return 0;
}
double presentValue(double passTime, double futureValue, double interestRate) {
	return futureValue/(pow((1 + interestRate), passTime));
}
