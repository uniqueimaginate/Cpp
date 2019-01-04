#include <iostream>

using namespace std;

const char* getName()
{
	return "Jack jack";
}

int main()
{
	////char name[] = "Jack jack";
	//const char *name = "Jack jack";
	//const char *name2 = "Jack jack";

	//cout << (uintptr_t)name << endl;
	//cout << (uintptr_t)name2 << endl;
	//cout << name << endl;

	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";
	const char *name = "Jack Jack";

	cout << int_arr << endl;	// pointer	address ex 0x313234
	cout << char_arr << endl;	// string	Hello, World!
	cout << name << endl;		// string	Jack Jack

	char c = 'Q';
	cout << &c << endl;
	cout << *&c << endl;

	return 0;
}