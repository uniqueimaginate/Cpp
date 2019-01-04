#include <iostream>

int main()
{
	using namespace std;

	const int value = 5;
	const int *ptr = &value;
	// *ptr = 6, // value = 6	// at these two cases is impossible
								// because they are initialized with const

	int value1 = 5;
	const int *ptr = &value1;

	int value2 = 6;
	ptr = &value2;		// the address of ptr can be changed 
						// but the value of *ptr can't be changed
						// because of const int *ptr

	int value3 = 5;
	int *const ptr1 = &value3;	// the address of ptr1 can't be changed
								// but the value of *ptr1 can be changed
								// because of int *const ptr1
	*ptr1 = 10;
	cout << *ptr1 << endl;

	const int *const ptr2;	// because this is const int & *const ptr2
							// it must be initialized at first
	return 0;
}