#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const array<int,5> &my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{
	//int array[5] = { 1,2,3,4,5 };

	array<int, 5> my_arr = { 1, 21, 3, 40, 5 };


	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;

	std::sort(my_arr.begin(), my_arr.end());

	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;

	cout << my_arr[0] << endl;
	//cout << my_arr.at(10) << endl;	// .at checks error
	cout << my_arr.size() << endl;

	printLength(my_arr);

	return 0;
}