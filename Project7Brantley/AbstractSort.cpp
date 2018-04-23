#include <iostream>
#include <string>
#include "AbstractSort.h"
#include <vector>
using namespace std;

AbstractSort::AbstractSort()
{
	comparisons = 0;
	swaps = 0;
}
AbstractSort::~AbstractSort()
{
}
// Our pure virtual member function
void sort(int arr[], int size) {
}
// Here we will perform our comparisons
bool AbstractSort::compareIntGreater(int firstInt, int secondInt) {
	comparisons += 1;
	if (firstInt > secondInt) {
		swaps += 1;
		return 1;
	}
	else { return 0; }
}
// Functions to return swaps and comparisons
int AbstractSort::getSwaps(){
	return swaps;
}
int AbstractSort::getComparisons(){
	return comparisons;
}
// This is our bubblesort::sort, overriden pure virtual member function
void BubbleSort::sort(int arr[], int size) {
	sortedArray = arr;
	bool done = false;
	while (done == false) {
		int currentSwaps = 0;
		for (int x = 0; x < size; x++) {
			int temp;
			if (compareIntGreater(sortedArray[x], sortedArray[x + 1])) {
				temp = sortedArray[x + 1];
				sortedArray[x + 1] = sortedArray[x];
				sortedArray[x] = temp;
				currentSwaps++;
			}
		}
		if (currentSwaps == 0) { done = true; }
		else { swaps += currentSwaps; }
	}
}
