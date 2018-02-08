// Christopher Brantley
// 2/04/2018
// CSC 234
// This is my own work.
#include <iostream>
#include <fstream>
using namespace std;
//Including our classes, using std namespace
int Linear976(int[62]);
int bubbleSort(int[62]);
int selectionSort(int[62]);
int binary976(int[62]);
void display(int, int, int, int, int, int[62], int[62]);
//Our function prototypes
// Our main function, we will hold our directing code
int main() {
	// First we open our "Numbers.txt" file; we create our two integer areas... for bubble and selection sorting
	// We got our original array value from a incremental variable within our while loop
	// Our remaining integer variables are utilized for our file needs and to provide user output for requested values of precision
	// We close our file for cleanliness
	// We call our functions with respective assignment variables and passing arguments
	// Finish our program by calling our display() function and pausing the system for user viewership
	// We then return 0 to show proper code execution
	ifstream file;
	file.open("Numbers.txt");
	int numberListBubble[62] = {};
	int numberListSelection[62] = {};
	int x, y = 0, preBubble976, bubbleSwaps,selectionSwaps, postBubble976, binaryComparisons;
	while (file >> x) {
		numberListBubble[y] = x;
		numberListSelection[y] = x;
		y++;
	}
	file.close();
	preBubble976 = Linear976(numberListBubble);
	bubbleSwaps = bubbleSort(numberListBubble);
	postBubble976 = Linear976(numberListBubble);
	selectionSwaps = selectionSort(numberListSelection);
	binaryComparisons = binary976(numberListSelection);
	display(preBubble976, bubbleSwaps, postBubble976, selectionSwaps, binaryComparisons, numberListBubble, numberListSelection);
	system("pause");
	return 0;
}
// Part 1 and 2
// We can pass integer arrays here to perform a linear function for a value of 976
// We will return that value or a value of -1
int Linear976(int numberList[62]) {
	for (int x = 0; x < 62; x++)
	{
		if (numberList[x] == 976)
		{
			return x;
		}
	}
	return -1;
}
// We can pass integer arrays here to perform a Bubble Sort in ascending order
// We have our integer/boolean variables
// While done is still assigned false we will set our incremental counter up and run our for loop
// Our for loop will run through our values in our array and check if the next returned value is less then our current value
// If our current value is greater than we must temporarily store the value of our next returned value and then copy our first value...
// Into the place of the second and vice versa w/ our temporary variable
// We will then add to our currentSwaps variable which resets at 0 each iteration of our while loop
// If our currentSwaps retains its value of 0 we know that we have succesfully sorted our list and will return our value of swaps
int bubbleSort(int numberList[62]) {
	bool done = false;
	int swaps = 0;
	while (done == false) {
		int currentSwaps = 0;
		for (int x = 0; x < 61; x++) {
			int temp;
			if (numberList[x] > numberList[x + 1]) {
				temp = numberList[x + 1];
				numberList[x + 1] = numberList[x];
				numberList[x] = temp;
				currentSwaps++;
			}
		}
		if (currentSwaps == 0) { done = true; }
		else { swaps += currentSwaps; }
	}
	return swaps;
}

// Part 3
// We can pass integer arrays here to perform a Selection Sort in ascending order
// We create variables for our minimum index, minimum value, and incremental swaps value
// For a range of 61, we retrieve our first minimum index and value...
// We will then, with a range of 62 check if our next returned value is less than our current minimum value
// If we trigger this we can then set our next returned value as our current minimum and set our minimium index to that index
// At the end of our inner loop we will be given the oportunity to update our values and incremennt our swap variable
int selectionSort(int numberList[62]) {
	int minIndex, minValue, swaps = 0;
	for (int x = 0; x < 61; x++) {
		minIndex = x;
		minValue = numberList[x];
		for (int y = x + 1; y < 62; y++) {
			if (numberList[y] < minValue) {
				minValue = numberList[y];
				minIndex = y;
			}
		}
		swaps++;
		numberList[minIndex] = numberList[x];
		numberList[x] = minValue;
	}
	return swaps;
}
// We can pass integer arrays here to perform a Binary search
// We create our beginning, middle, and ending variable place holders and our comparisons value holder
// We create our boolean and set it to false
// Our while loop trigger asks if our boolean is still false and whether or not our low value is less or equal to our high value
// So we will check our middle value and see if it is equal to 976, if so we will end our whie loop
// If we continue on and check to see if our middle number is greater than 976...
// If so we will know then we have to check our lower portion of our array... We will set high equal to our middle value minus one
// Otherwise we will  set our low value equal to middle -1 because we now know we have to check our upper portion of our array
// When we have finished this pattern and returned true for our boolean value we will return how many comparisons it took to find our number
int binary976(int numberList[62]) {
	int low = 0, high = 61, middle = 0, comparisons = 0;
	bool found = false;
	while (!found && low <= high)
	{
		middle = (low + high) / 2;
		if (numberList[middle] == 976) {
			found = true;
		}
		else if (numberList[middle] > 976) {
			high = middle - 1;
			comparisons++;
		}
		else { low = middle + 1; }
		comparisons++;
	}
	return comparisons;
}
//Part 4
// Output for user to see sort indexes, swaps, and comparisons
void display(int preBubble976, int bubbleSwaps, int postBubble976, int selectionSwaps, int binaryComparisons, int bubble[62], int selection[62]) {
	int x = 0;
	cout << "Pre-Sort Linear Search for 976: Index " << preBubble976 << endl;
	cout << "Number Swaps to BubbleSort array: " << bubbleSwaps << " swaps" << endl;
	cout << "Post-BubbleSort Linear Search for 976: " << postBubble976 << " comparisons" << endl;
	cout << "Number swaps to SelectionSort array: " << selectionSwaps << " swaps" << endl;
	cout << "Binary Search for 976 in SelectionSorted array: " << binaryComparisons << " comparisons" << endl;
	cout << endl << "Bubble Array" << endl;
	for (int i = 0; i < 62; i++) {
		cout << bubble[i] << " ";
		x++;
		if (x == 10) {
			cout << endl;
			x = 0;
		}
	}
	cout << endl << endl;
	cout << "Selection Array" << endl;
	for (int i = 0; i < 62; i++) {
		cout << selection[i] << " ";
		x++;
		if (x == 10) {
			cout << endl;
			x = 0;
		}
	}
	cout << endl;
}
