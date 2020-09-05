#include <iostream>
using namespace std;

//comparator function - sorts from smallest to largest
int compareFunc(const void * voidA, const void * voidB){
	int * intA = (int *)(voidA);
	int * intB = (int *)(voidB);
		
	return *intA - *intB;
}

int main(){
	const int ARRAY_SIZE = 10;
	int intArray[ARRAY_SIZE] = {87, 28, 100, 78, 84, 98, 75, 70, 81, 68};
	qsort(intArray, ARRAY_SIZE, sizeof(int), compareFunc);

	int sortedArray[ARRAY_SIZE];
	for (int i = 0; i < 10; i++) {
		sortedArray[i] = intArray[i];
		cout << sortedArray[i] << " ";
	}
	cout << "\n";
}
