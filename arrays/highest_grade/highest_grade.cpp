#include <iostream>
using namespace std;

int main() {
	
	struct student {
		int grade;
		int studentID;
		string name;
	};

	const int ARRAY_SIZE = 10;
	student studentArray[ARRAY_SIZE] = {
		{87, 10001, "Fred"},
		{28, 10002, "Tom"},
		{100, 10003, "Alistar"},
		{78, 10004, "Sasha"},
		{84, 10005, "Erin"},
		{98, 10006, "Belinda"},
		{75, 10007, "Leslie"},
		{70, 10008, "Candy"},
		{81, 10009, "Aretha"},
		{68, 10010, "Veronica"},
	};
	int highPosition = 0;
	for (int i = 1; i < ARRAY_SIZE; i++) {
		if (studentArray[i].grade > studentArray[highPosition].grade) {
			highPosition = i;
		}
	}
	cout << studentArray[highPosition].name << "\n";
}
