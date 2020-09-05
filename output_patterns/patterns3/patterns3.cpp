#include <iostream>
using namespace std;

int main(){
	int start = 8;
	for (int row = 1; row <= 4; row++){
		for (int whiteSpace = 1; whiteSpace <= row-1; whiteSpace++){
			cout << " ";
		}
			for (int hashNum = 1; hashNum <= start; hashNum++){
				cout << "#";
			}
		cout << "\n";
	start -= 2;
	}
}
