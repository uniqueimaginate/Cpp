#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

void printNumber(const int my_number)
{
	int n = my_number;
	cout << n << endl;
}

int main()
{
	//const int price_per_item = 30;
	//int num_item = 123;
	//int price = num_item * price_per_item;

	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;

	return 0;
}