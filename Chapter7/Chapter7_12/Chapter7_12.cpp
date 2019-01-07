#include <iostream>

using namespace std;

void countDown(int count)
{
	cout << count << endl;
	if(count >0)
		countDown(count - 1);
}

int fivonacci(int count)
{
	if (count == 0)
		return 0;
	else if (count == 1) {
		return 1;
	}
	else
	{
		int a = fivonacci(count - 1) + fivonacci(count - 2);
		return a;
	}
}

int main()
{
	for (int i = 0; i<5; i++)
		cout << fivonacci(i) << endl;;
	return 0;
}