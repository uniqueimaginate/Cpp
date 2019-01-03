#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{

	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black" << endl;
		break;
	case 1:
		cout << "White" << endl;
		break;
	}
}

int main()
{
	printColorName(Colors::BLACK);

	int x;
	cin >> x;
	
	switch (x)		// you can declare variables but you cannot initialize them in switch but outside case.
	{
		int a;
		int y;
		
	case 0:
		y = 5;
		break;

	case 1:
		cout << y << endl;
	}


	return 0;
}