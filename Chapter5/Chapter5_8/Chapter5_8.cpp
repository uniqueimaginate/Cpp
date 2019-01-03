#include <iostream>

using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
			break;
		if (ch == 'r')
			return;
	}

	cout << "Hello" << endl;

}

int main()
{
	int count = 0;
	bool escape_flag = false;
	while (!escape_flag)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;
		
		if (ch == 'x')
			escape_flag = true;
	}

	//while (true)
	//{
	//	cout << count << endl;
	//	if (count == 10) break;
	//	count++;
	//}

	//for (int i = 0; i < 10; ++i)
	//{
	//	if (i % 2 == 0) continue;

	//	cout << i << endl;
	//}

	return 0;
}