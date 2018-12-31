#include <iostream> // cout, cin, endl, ...
#include <cstdio> //printf

int main()
{
	using namespace std;
	//double pi = 3.1315192;

	/*
	cout << "i love this lecture!\n" << endl;
	cout << "x is " << x << " pi is " << pi << endl;

	cout << "abc" << "\t" << "def" << endl;
	cout << "\a";
	*/


	int x = 1;

	cout << "Before your input, x was " << x << endl;
	cin >> x;

	cout << "Your input is " << x << endl;

	return 0;
}