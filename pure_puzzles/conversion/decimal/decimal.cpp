#include <iostream>
using namespace std;

int main() {
	int n, i, j, binaryNum = 0, decimalNum;

	cout << "Enter a decimal number to convert to binary: " << "\n";
	
	cin >> n;

	//decimalNum used to print out original num - n is being manipulated
	decimalNum = n;
	i = 1;

	for(j = n; j > 0; j = j / 2){
		binaryNum = binaryNum + (n % 2) * i;
		i = i * 10;
		n = n / 2;
	}

	cout << "The binary for " << decimalNum << " is " << binaryNum << ".\n";
}
