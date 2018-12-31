#include <iostream>

int main()
{
	using namespace std;

	bool bValue = true;
	char chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	int i = 123;	//copy initialization
	int a(123);		//direct initialization
	int b{ 123 };	//uniform initialization

	int k, l, m;
	//int l;

	/*cout << chValue << endl;
	cout << bValue << endl;
	cout << fValue << endl;
	cout << dValue << endl;
	cout << aValue << endl;
	cout << aValue2 << endl;
	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;*/

	return 0;
}