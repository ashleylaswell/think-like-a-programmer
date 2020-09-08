#include <iostream>
using namespace std;

int main(){
	int ARRAY_SIZE;
	cout << "number of survey responses: ";
	cin >> ARRAY_SIZE;
	int *surveyData = new int[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << "survey response " << i + 1 << ": ";
		cin >> surveyData[i];
	}
	//since array is dynamically allocated - we no longer need array (deallocate)
	delete[] surveyData;
}
