#include <iostream>
#include <typeinfo>

enum Color // user - defined - data type
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE,
};	// for comfort it is usually written in header file

int main()
{
	using namespace std;

	Color my_color = COLOR_BLACK;

	cout << my_color << " " << COLOR_RED << endl;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	return 0;
}