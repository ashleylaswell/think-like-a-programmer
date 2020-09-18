#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

struct student {
	int grade;
	int studentID;
	string name;
};

//comparator function - sorts from smallest to largest
int compareGrade(const void* a, const void* b){
	student* studentA = (student*)(a);
	student* studentB = (student*)(b);
	return (studentA-> grade - studentB->grade);
}

int main(){
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
	
	qsort(studentArray, ARRAY_SIZE, sizeof(student), compareGrade);
	
	//print studentArray sorted by grade
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << studentArray[i].grade << "\t"
			 << studentArray[i].studentID << "\t"
			 << studentArray[i].name << "\n";
	}
	cout << "\n";
}

