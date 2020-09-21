#include <iostream>
#include <cmath>
using namespace std;

const int NUM_AGENTS = 3;
const int NUM_MONTHS = 5;
int sales[NUM_AGENTS][NUM_MONTHS] = {
	{1, 2, 3, 4, 5},
	{6, 7, 8, 9, 10},
	{11, 12, 13, 14, 15}
};

int compareFunc(const void * voidA, const void * voidB) {
	int * intA = (int *)(voidA);
	int * intB = (int *)(voidB);
	return *intA - *intB;
}

double medianSales(int intArray[], int ARRAY_SIZE) {
	qsort(intArray, ARRAY_SIZE, sizeof(int), compareFunc);
	if (ARRAY_SIZE % 2 != 0){
		int oddPosition = ceil((ARRAY_SIZE)/2);
		double median = (intArray[oddPosition]);
		return median;
	}
	else if(ARRAY_SIZE % 2 == 0){
		int firstPosition = (ARRAY_SIZE / 2)-1;
		int secondPosition = firstPosition + 1;
		double median = (intArray[firstPosition] + intArray[secondPosition])/2.0;
		return median;
	}
	return -1;
}
	
int main() {
  
	double highestMedian = medianSales(sales[0], NUM_MONTHS);
	for (int agent = 1; agent < NUM_AGENTS; agent++){
		double agentMedian = medianSales(sales[agent], NUM_MONTHS);
		if (agentMedian > highestMedian)
			highestMedian = agentMedian;
	}
	cout << "Highest median sales: " << highestMedian << "\n";
}
