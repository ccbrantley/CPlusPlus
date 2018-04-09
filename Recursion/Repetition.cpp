#include <iostream>;
#include <string>;
using namespace std;
void repetition(string,int);
int main() {
	string key;
	int times;
	cout << "Key: ";
	cin >> key;
	cout << "Times: ";
	cin >> times;
	if (times >= 1) {
		repetition(key, times);
	}
	system("pause");
	return 0;
}
void repetition(string key, int times) {
	if (times == 1) {
		cout << key << endl;
		return;
	}
	cout << key << endl;
	repetition(key, times - 1);
}
