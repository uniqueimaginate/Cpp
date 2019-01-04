#include <iostream>

using namespace std;

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

void doSomething(int &n)
{
	cout << &n << endl;	// &n address dosn't changes from main function
	n = 10;
	cout << "In doSomething " << n << endl;
}

int main()
{
	//int value = 5;
	//int *ptr = nullptr;
	//ptr = &value;

	//int &ref = value;

	//cout << ref << endl;

	//ref = 10;	// *ptr = 10;
	//cout << value << " " << ref << endl;
	//
	//cout << &value << endl;
	//cout << &ref << endl;
	//cout << ptr << endl;
	//cout << &ptr << endl;

	/*int n = 5;
	cout << n << endl;

	cout << &n << endl;

	doSomething(n);

	cout << n << endl;*/

	Other ot;
	int &v1 = ot.st.v1;
	v1 = 1;

	int value = 5;
	int *const ptr = &value;
	int &ref = value;

	*ptr = 10;
	ref = 10;

	return 0;
}