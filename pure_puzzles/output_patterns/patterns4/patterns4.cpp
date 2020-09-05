#include <iostream>
using namespace std;

int main(){
	int numOfRows = 8;
	int halfRow = numOfRows / 2;

	//stem
	for (int row =1; row == 1; row++) {
		for (int hashNum = 1; hashNum <= 2; hashNum++) {
	   		cout << "#";
		}
 	cout << "\n";
	}	

	//top half
	for (int row = 2; row <= halfRow; row++){
		for (int whiteSpace = 1; whiteSpace <= abs(halfRow-row); whiteSpace++){
			cout << " ";
		}
			for (int hashNum = 1; hashNum <= 2*(halfRow-abs(halfRow - row)); hashNum++){
				cout << "#";
			}
		cout << "\n";
	}

	//bottom half
	for (int row = halfRow; row >= 1; row--){
		for (int whiteSpace = 1; whiteSpace <= abs(halfRow-row); whiteSpace++){
            cout << " ";
        }
            for (int hashNum = 1; hashNum <= 2*(halfRow-abs(halfRow - row)); hashNum++){
                cout << "#";
            }
        cout << "\n";
    }
}
