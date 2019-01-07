#include <iostream>
using namespace std;

void print(int x = 10, int y = 20, int z = 30);	// usually declared in header file
												// if defalut parameter already declared in declaration
												// you have to delete the parameter in definition
												// like the following
												// +@ : default parameter must be declared from the right

void print(int x, int y, int z)
{
	cout << x << " " << y << " " << z << endl;
}

// with function overloading
void print1(std::string str){}
void print1(char ch = ' ') {}
void print2(int x) {}
void print2(int x, int y = 20) {}


int main()
{
	print();
	print(100);

	print1();

	//print2(10);	// this is ambiguous
				// because two print2 functions have default parameter x
	return 0;
}