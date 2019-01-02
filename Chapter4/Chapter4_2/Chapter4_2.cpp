#include <iostream>
#include "Myconstant.h"
using namespace std;

static int g_a = 1;

//forward declaration
void doSomething();	// at test.cpp
extern int a;

//int value = 123;
//int a = 1;

//void doSomething()
//{
//	static int a = 1;
//	++a;
//	cout << a << endl;
//}

int main()
{
	//cout << value << endl;

	//int value = 1;

	//cout << ::value << endl; // :: can access global variable
	//cout << value << endl;

	//doSomething();

	//cout << a << endl;

	cout << "In Mainfile.cpp " << Constants::pi << " " << &Constants::pi << endl;

	doSomething();

	return 0;
}