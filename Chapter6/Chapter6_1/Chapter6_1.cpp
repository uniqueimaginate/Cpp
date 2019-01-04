#include <iostream>

using namespace std;

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	JACKJACK,		// = 0
	DASH,			// = 1
	VIOLET,			// = 2
	NUM_STUDENTS,	// = 3
};

int main()
{
	cout << sizeof(Rectangle) << endl;
	Rectangle rect_arr[10];
	cout << sizeof(rect_arr) << endl;

	int my_array[] = { 1,2,3,4,5 };
	cout << my_array[JACKJACK] << endl;

	return 0;
}