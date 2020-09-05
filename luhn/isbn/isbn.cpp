#include <iostream>
using namespace std;

int timesThreeValue(int digit) {
    int timesThree = digit * 3;
    return timesThree;
}

int addISBN() {
	int position = 1;
    int checksum = 0;
	char digit; 
	int lastDigit;
	int checkDigit;

	digit = cin.get();
	while (digit != 10) {
		//add two to all the even digits but not to check digit or end of line digit
		if (position % 2 == 0 && position != 13 && position != 14) {
			checksum += timesThreeValue(digit - '0');
		}
		//saves check digit in a variable
		else if (position == 13){
			lastDigit = digit - '0';
			cout << "the last digit is " << lastDigit << "\n";
		}
		else if (position == 13 || position == 14) {
			checksum += 0;
		}
		else {
			checksum += digit - '0';
		}   
		digit = cin.get();
		position++;
    }

	//checks if 14th position is end of line character
	if (position == 14 && digit == 10) {
	
		//modulo check	
		int moduloCheck = checksum % 10;
		if (moduloCheck != 0) {
			checkDigit = 10 - moduloCheck;
		}
		else {
			checkDigit = 0;
		}
		cout << "The check digit is " << checkDigit << "\n";
		
		//prints whether last digit scan matches modulo check
		if (lastDigit == checkDigit) {
			cout << "Valid ISBN" << "\n";
		}
		else {
			cout << "Invalid ISBN" << "\n";
		}
	}
	//prints for incorrect length
	else {
		cout << "The ISBN is invalid." << "\n";
	}
}

int main() {
	cout << "Enter a 13 digit number: " << "\n";
	addISBN();
}
