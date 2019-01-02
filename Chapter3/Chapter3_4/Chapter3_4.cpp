#include <iostream>

int main()
{
	using namespace std;
	// comma operator

	/*int x = 3;
	int y = 10;
	int z = (++x, ++y);

	cout << x << " " << y << " " << z << endl;*/

	//int a = 1, b = 10;
	//int z;

	//z = (a, b);
	//z = a, b; comma operator has lower priority than assignment operator
	//cout << z << endl;

	// conditional operator (arithmetic if)
	bool onSale = true;

	const int price = (onSale == true) ? 10 : 100;

	//if (onSale)
	//	price = 10;
	//else
	//	price = 100;

	cout << price << endl;

	int x = 5;
	cout << ((x % 2 == 0) ? 0 : "odd") << endl;

	return 0;
}