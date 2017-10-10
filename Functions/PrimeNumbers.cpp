#include <iostream>
using namespace std;
bool isPrime(int);
int main() {
	cout << "Enter a number to check if it is prime." << endl;
	int user_input = 0;
	while (user_input < 2) {
		cout << "Number: ";
		cin >> user_input;
	}
	if (isPrime(user_input)) { cout << user_input << " is prime."; }
	else { cout << user_input << " is not prime."; }
	cout << endl;
	system("pause");
	return 0;
}
bool isPrime(int number) {
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {return false;}
	}
	return true;
}
