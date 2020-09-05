#include <iostream>
using namespace std;

int main() {
	const int ARRAY_SIZE = 10;
	int vendorPayments[ARRAY_SIZE] = {87, -76, 100, 97, -64 , 83, 88, 92, -74, 95};
	int countNegative = 0;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		if (vendorPayments[i] < 0) countNegative++;
	}
	cout << countNegative << "\n";
}
