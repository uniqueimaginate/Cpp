#include <iostream>

using namespace std;

int main()
{
	int r = 1 + 2 + 3 * 4;
	cout << "r : " << r << endl;

	int a = 1;
	int b = 3;
	int c = 5;
	a = b = c;

	cout << "a : " << a << " b : " << b << " c : " << c << endl;
	int t = 10;
	int w = 3;
	
	t /= --w + 5;
	cout << "t : " << t << endl;

	int d = 0;
	int op = a || b && c || d;
	cout << "a || b && c || d : " << op << endl;

	return 0;
}