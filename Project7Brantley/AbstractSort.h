#pragma once
//Base Class
class AbstractSort
{
public:
AbstractSort();
~AbstractSort();
// Our pure virtual member function
 virtual void sort(int arr[], int size) = 0;
	int* sortedArray;
	bool AbstractSort::compareIntGreater(int firstInt, int secondInt);
	int comparisons;
	int swaps;
	int AbstractSort::getSwaps();
	int AbstractSort::getComparisons();
};
//Derived Class
class BubbleSort : public AbstractSort {
public:
	//Overriding our virtual member function
	virtual void sort(int arr[], int size) override;
};

