#include <iostream>
using namespace std;
double factorial(double);
int main() {
	double factor;
	cout << "Factor: ";
	cin >> factor;
	cout << "Factorial: " << factorial(factor) << endl;
	system("pause");
	return 0;
}
double factorial(double factor) {
	double product;
	if (factor == 1) {
		return 1;
	}
	else { product = factorial(factor - 1) * factor; }
	return product;

}
