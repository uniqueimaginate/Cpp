#include <iostream>

using namespace std;

struct MyStruct
{
	int array[5] = { 9,7,5,3,1 };
};

void printArray(int array[])
{
	cout << sizeof(array) << endl;	// 4
	cout << *array << endl;
}

void doSomething(MyStruct *ms)
{
	cout << sizeof((*ms).array) << endl;
}

int main()
{
	MyStruct ms;
	cout << ms.array[0] << endl;
	cout << sizeof(ms.array) << endl;

	doSomething(&ms);
	//int array[5] = { 9,7,5,3,1 };

	//cout << array[0] << " " << array[1] << endl;
	//cout << array << endl;
	//cout << &(array[0]) << endl;
	//cout << *array << endl;

	//int *ptr = array;
	//cout << ptr << endl;
	//cout << *ptr << endl;

	//cout << sizeof(array) << endl;

	//int *ptr = array;
	//cout << *ptr << " " << *(ptr + 1) << endl;
	//cout << sizeof(ptr) << endl;

	//char name[] = "jackjack";
	//cout << *name << endl;
	//printArray(array);

	return 0;
}