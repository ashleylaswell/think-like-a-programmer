#include <iostream>
using namespace std;

int readChar(){
	int checksum = 0;
	char digit;
	
	digit = cin.get();
	while (digit != 10) {
		int intConvert = (digit - '0');
		checksum *= 2;
		checksum += intConvert;
		digit = cin.get();
	}
	return checksum;
}

int main(){
	cout << "Enter a number in binary: " << "\n";
	int value = readChar();
	cout << "The decimal number is: " << value  << "\n";

	return 0;
}
