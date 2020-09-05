#include <iostream>
using namespace std;

int compareFunc(const void * voidA, const void * voidB) {
    int * intA = (int *)(voidA);
    int * intB = (int *)(voidB);
    return *intA - *intB;
}

int main(){
	
	const int ARRAY_SIZE = 12;
	int surveyData[ARRAY_SIZE] = {4, 7, 7, 9, 9, 9, 8, 3, 3, 3, 3, 10};

	int mostFrequent;
	int highestFrequency = 0;
	int currentFrequency = 0;
	
	for (int i = 0; i < ARRAY_SIZE; i++) {
		currentFrequency++;
		//if surveyData[i] is last last occurence of a value
		if (i == ARRAY_SIZE - 1 || surveyData[i] != surveyData[i + 1]) {
			if (currentFrequency > highestFrequency) {
				highestFrequency = currentFrequency;
				mostFrequent = surveyData[i];
			}
			currentFrequency = 0;
		}
	}
	cout << mostFrequent << "\n";

	return 0;
}
