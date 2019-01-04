#include <iostream>

using namespace std;

void doSomething(const int &x)
{
	cout << x << endl;
}

int main()
{
	int x = 5;
	//int &ref_x = x;

	//const int &ref_2 = ref_x;

	//int &ref_1 = 3 + 4;		// impossible
	const int &ref_x = 3 + 4;	// possible

	int a = 1;

	doSomething(a);
	doSomething(1);
	doSomething(a + 3);
	doSomething(3 * 4);

	return 0;
}