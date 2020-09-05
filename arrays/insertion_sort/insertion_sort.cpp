#include <iostream>
using namespace std;

void insertionSort(int intArray[], int end) {
	int start;
	for (int i = start + 1; i <= end; i++) {
		for (int j = i; j > start && intArray[j-1] > intArray[j]; j--){
			int temp = intArray[j-1];
			intArray[j-1] = intArray[j];
			intArray[j] = temp;
		}
	}
}

void printArray(int intArray[], int end) {
	int i;
	for (i = 0; i < end; i++)
		cout << intArray[i] << " ";
	cout << "\n";
}

int main() {
	const int ARRAY_SIZE = 10;
	int intArray[ARRAY_SIZE] = {87, 28, 100, 78, 84, 98, 75, 70, 81, 68};

	//can modify which part of the array to sort
	int start = 0;
	int end = ARRAY_SIZE - 1;

	insertionSort(intArray, end);
	printArray(intArray, end);

	return 0;
}
