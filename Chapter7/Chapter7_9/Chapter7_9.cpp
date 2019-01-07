#include <iostream>
#include <array>
#include <functional>

using namespace std;

int func()
{
	return 5;
}

int goo()
{
	return 10;
}

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;
}

//typedef bool(*check_fcn_t)(const int&);
//using check_fcn_t = bool(*)(const int&);

void printNumbers(const array<int, 10> &my_array,
	bool (*check_fcn)(const int&))	// you can change like this : check_fcn_t check_fcn = isEven
{
	for (auto element : my_array)
	{
		if (check_fcn(element) ==true) cout << element;
	}
	cout << endl;
}

void printNumbers1(const array<int, 10> &my_array,
	std::function<bool(const int&)> check_fcn)
{
	for (auto element : my_array)
	{
		if (check_fcn(element) == true) cout << element;
	}
	cout << endl;
}

int main()
{
	/*int(*fcnptr)() = func;
	cout << fcnptr() << endl;
	fcnptr = goo;
	cout << fcnptr() << endl;*/

	std::array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };
	//printNumbers(my_array, isEven);
	//printNumbers(my_array, isOdd);

	std::function<bool(const int&)> fcnptr = isEven;
	printNumbers1(my_array, fcnptr);
	fcnptr = isOdd;
	printNumbers1(my_array, fcnptr);

	

	return 0;
}