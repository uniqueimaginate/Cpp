#include <iostream>

using namespace std;

int main()
{
	const int length = 5;

	int *array = new int[length]();	// () makes this array element 0

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; i++)
	{
		cout << (uintptr_t)&array[i] << endl;
		cout << array[i] << endl;
	}

	delete[] array;

	return 0;
}