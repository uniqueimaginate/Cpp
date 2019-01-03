#include <iostream>

using namespace std;

int min(int x, int y)
{
	if (x > y) return y;
	else return x;

	//return (x > y) ? y : x;
}

int main()
{
	int x;
	cin >> x;

	/*if (x > 10)
		cout << "A" << endl;
	else if (x == -1)
		return 0;
	else if (x < 0)
		cout << "B " << endl;

	cout << "Hello " << endl;*/
	
	/*int x,y;
	cin >> x >> y;

	if (x > 0 && y > 0)
		cout << "both numbers are positive" << endl;
	else if (x > 0 || y > 0)
		cout << "one of the numbers is positive" << endl;
	else
		cout << "Neither number is positive" << endl;*/

	//if (x > 10)
	//{
	//	cout << x << " is grater than 10" << endl;
	//	cout << "Test 1" << endl;

	//}
	//else
	//{
	//	cout << x << " not is greater than 10" << endl;
	//	cout << "Test 1" << endl;
	//}

	//if (1)
	//	int x = 5;
	//else
	//	int x = 6;

	//cout << x << endl;

	

	return 0;
}