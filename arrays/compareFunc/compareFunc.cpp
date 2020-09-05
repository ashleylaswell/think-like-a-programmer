#include <iostream>
using namespace std;

int compareFunc(const void * voidA, const void * voidB) {
	int * intA = (int *)(voidA);
	int * intB = (int *)(voidB);
	return *intA - *intB;
}
