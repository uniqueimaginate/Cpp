#include <iostream>
#include <cmath>	// sin(), cos()
#include <vector>

using namespace std;

void addOne(int &y)
{
	cout << y << " " << &y << endl;
	y = y + 1;
}

void getSinCos(const double &degrees, double &sin_out, double &cos_out)
{
	static const double pi = 3.141592;

	const double radians = degrees * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

void foo(const int &x) {
	cout << x << endl;
}

void foo1(int *&ptr)
{
	cout << ptr << " " << &ptr << endl;
}

//void printElement(int(&arr)[4])
//{
//
//}

void printElement(const vector<int> &arr)
{

}

int main()
{
	double sin(0.0);
	double cos(0.0);
	getSinCos(30.0, sin, cos);
	cout << sin << " " << cos << endl;

	foo(6);

	int x = 5;
	int *ptr = &x;
	foo1(ptr);

	//int arr[]{ 1,2,3,4 };
	vector<int> arr{ 1,2,3,4 };
	printElement(arr);
	return 0;
}