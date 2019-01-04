#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
	int a, b, c, d;
};

int main()
{
	int x = 5;
	double d = 123.0;

	int *ptr_x = &x;
	double *ptr_y = &d;

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << endl;
	cout << sizeof(&d) << endl;

	Something ss;
	Something *ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl;
	

	return 0;
}