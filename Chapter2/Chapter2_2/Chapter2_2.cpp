#include <iostream>
#include <math.h>

int main()
{
	using namespace std;

	short	s = 1; // 2bytes = 2 * 8 = 16 bits
	/*int		i = 1;
	long	l = 1;
	long long ll = 1;*/

	/*cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;*/

	/*cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;*/
	s = 32767;
	s = s + 1;

	cout << "min() " << s << endl; // overflow

	s = std::numeric_limits<short>::min();
	s = s - 1;

	cout << s << endl;

	cout << 22 / 4 << endl;
	cout << (float)22 / 4 << endl;
	cout << 22 / (float)4 << endl;

	return 0;
}