#include <iostream>
#include "Myconstant.h"
extern int a = 123;

//void doSomething();

void doSomething()
{
	using namespace std;

	cout << "In test.cpp " << Constants::pi << " " << &Constants::pi << endl;

}