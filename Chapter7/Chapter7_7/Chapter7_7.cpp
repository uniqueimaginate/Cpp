#include <iostream>
#include <string>

using namespace std;

// function overloading = same function name, different parameter

void getRandomValue(int &x){}
void getRandomValue(double &x){}

typedef int my_int;
void print(int x) {}
void print(my_int x) {}		// In this case, it is same function
							// this is not a function overloading

void print(const char *value) {}
void print(int value) {}

void print1(unsigned int value) {}
void print1(float value) {}



int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)	// function name is same, but the parameter data type is different
{
	return x + y;
}

int main()
{
	add(1, 2);
	add(3.0, 4.0);

	print(0);
	print("a");	// this makes an error so if you want to use
				// you have to change char *value -> const char *value


	//print1('a');
	//print1(0);
	//print1(3.14159);	// these 3 cases are ambiguous
						// so if you want to make these clear
						// you have to change like the following

	print1((unsigned int)'a');
	print1(0u);
	print(3.14159f);

	
	return 0;
}