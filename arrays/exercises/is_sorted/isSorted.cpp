#include <iostream>
using namespace std;

int ARRAY_SIZE = 5;
int intArray[]= {1, 1, 7, 3, 4};

int isSorted(int intArray[], int ARRAY_SIZE){
	int unsorted = 0;
	for (int i = 0; i < ARRAY_SIZE - 1; i++){
		if (intArray[i] < intArray[i+1] || intArray[i] == intArray[i+1]){
				unsorted += 0;
		}
		else {
			unsorted += 1;
		}
	}
	if (unsorted == 0)
		return true;
	else
		return false;
}

int main(){
  int check = isSorted(intArray, ARRAY_SIZE);
		if (check == true)
			cout << "Your array is sorted." << "\n";
		else
			cout << "Your array is not sorted." << "\n";
}
