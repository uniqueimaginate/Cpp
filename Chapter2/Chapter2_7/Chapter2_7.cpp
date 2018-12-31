#include <iostream>

int main()
{
	using namespace std;

	char c1(65);

	cout << int('\n') << endl;
	cout << "This is first line \nsecond line";
	cout << "This is first line " << endl;
	cout << "second line";

	//cout << sizeof(unsigned char) << endl;
	//cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	//cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;
	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//char c2('A');

	//cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	//// c-style casting
	//cout << (char)65 << endl;
	//cout << (int)'A' << endl;

	//// c++ style casting
	//cout << char(65) << endl;
	//cout << int('A') << endl;

	//cout << static_cast<char>(65) << endl;
	//cout << static_cast<int>('A') << endl;

	//char ch(97);
	//cout << ch << endl;
	//cout << static_cast<int>(ch) << endl;
	//cout << ch << endl;

	return 0;
}