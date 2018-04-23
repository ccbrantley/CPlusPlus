#include <iostream>
#include <string>
#include <fstream>
#include "AbstractSort.h"
// Christopher Brantley
// Project 7
// This is my original code for CSC 234
using namespace std;
int main() {
	// Create our file stream and open our data.txt file
	ifstream inputFile;
	inputFile.open("Data.txt");
	int temporary;
	int *dataArray, size = -1, position = 0;
	// Get our size
	while (inputFile >> temporary) {
		size++;
	}
	// Bring our seek back to the beginning of file
	inputFile.clear();
	inputFile.seekg(0, ios::beg);
	dataArray = new int[size];
	// Create our array ^^...  and with our code below we will it
	while (inputFile >> temporary) {
		dataArray[position] = temporary;
		position++;
	}
	//Create a class assigned to variable k
	// We call the sort method
	BubbleSort k;
	k.sort(dataArray, size);
	// Receive our sorted array
	int *numberArray = k.sortedArray;
	// Display output for user with comparisons/swaps and their sorted array
	cout << "Number of Comparisons: " << k.getComparisons() << endl;
	cout << "Number of Swaps: " << k.getSwaps() << endl;
	cout << "Final Sorted Array: " << endl;
	for (int x = 0; x < size; x++) {
		cout << "Position " << x << ": " << numberArray[x] << endl;
	}

	system("pause");
	return 0;
}
