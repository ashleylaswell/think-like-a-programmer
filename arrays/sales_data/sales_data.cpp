#include <iostream>
using namespace std;

//finds average of an array of integers
double arrayAverage(int intArray[], int ARRAY_SIZE) {
	double sum = 0;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		sum += intArray[i];
	}
	double average = sum / ARRAY_SIZE;
	return average;
}

int main(){
	const int NUM_AGENTS = 3;
	const int NUM_MONTHS = 12;
	int sales[NUM_AGENTS][NUM_MONTHS] = {
		{1856, 498, 30924, 87478, 328, 2653, 387, 3754, 387587, 2873, 276, 32},
		{5865, 5456, 3983, 6464, 9957, 4785, 3875, 3838, 4959, 1122, 7766, 2534},
		{23, 55, 67, 99, 265, 376, 232, 223, 4546, 564, 4544, 3434}
	};
	//function that finds the highest sale for a single month for any agent
	int highestSales= sales[0][0];
	for (int agent = 0; agent < NUM_AGENTS; agent++) {
		for (int month = 0; month < NUM_MONTHS; month++) {
			if (sales[agent][month] > highestSales)
				highestSales = sales[agent][month];
		}
	}
	//find the agent with the highest monthly sales average
	double highestAverage = arrayAverage(sales[0], 12);
	for (int agent = 1; agent < NUM_AGENTS; agent++) {
		double agentAverage = arrayAverage(sales[agent], 12);
		if (agentAverage > highestAverage)
			highestAverage = agentAverage;
	}
	cout << "the highest sales of any agent: " << highestSales << "\n";
	cout << "the highest monthly average: " << highestAverage << "\n";
}
