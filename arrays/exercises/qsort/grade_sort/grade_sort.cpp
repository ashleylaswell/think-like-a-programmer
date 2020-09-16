#include <iostream>
using namespace std;

//comparator function - sorts from smallest to largest
int compareFunc(const void * voidA, const void * voidB){
	int * intA = (int *)(voidA);
	int * intB = (int *)(voidB);
		
	return *intA - *intB;
}

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

int main(){
	qsort(studentArray, ARRAY_SIZE, sizeof(int), compareFunc);

}

