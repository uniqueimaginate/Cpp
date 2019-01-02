#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	//int x, y;
	//cin >> x >> y;
	//cout << "Your input values are : " << x << " " << y << endl;
	//
	//if (x == y)
	//	cout << "equal" << endl;
	//if (x != y)
	//	cout << "Not equal" << endl;
	//if (x > y)
	//	cout << "x is greater than y" << endl;
	//if (x < y)
	//	cout << "x is less than y" << endl;
	//if (x >= y)
	//	cout << "x is greater than y or equal to y" << endl;
	//if (x <= y)
	//	cout << "x is less then or equal to y" << endl;


	double d1(100 - 99.99);	// 0.001
	double d2(10 - 9.99);	// 0.001

	const double epsilon = 1e-10;

	if (std::abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal " << endl;

	cout << d1 << endl;
	cout << d2 << endl;

	if (d1 == d2)
		cout << "equal" << endl;
	else
	{
		cout << "Not equal" << endl;

		if (d1 > d2) cout << "d1 > d2" << endl;
		else
			cout << "d1 < d2" << endl;
	}
		

	return 0;

}