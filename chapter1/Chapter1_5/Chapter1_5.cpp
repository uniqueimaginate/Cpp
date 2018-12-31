#include <iostream>

using namespace std;

int multiplyTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;

	return sum;
}

void printHelloWorld()
{
	cout << "Hello world " << endl;
}

int addTwoNumbers(int a, int b)
{
	return a + b;
}

int main()
{
/*
	cout << multiplyTwoNumbers(1,2) << endl;
	cout << multiplyTwoNumbers(3,4) << endl;
	cout << multiplyTwoNumbers(8,13) << endl;
*/
	//printHelloWorld();

	addTwoNumbers(1, 2);

	return 0;
}