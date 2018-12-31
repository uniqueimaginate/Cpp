#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main()
{
	using namespace std;

	//cout << std::boolalpha;
	//cout << isEqual(1,1) << endl;
	//cout << isEqual(0,3) << endl;

	bool b1 = true;	// copy initialization
	bool b2(false);	// direct ...
	bool b3{ true }; // uniform ...
	b3 = false;

	if (false)
		cout << "This is true " << endl;
	else
		cout << "This is false " << endl;

	//cout << std::noboolalpha; // or boolalpha
	//cout << (true && true) << endl;
	//cout << (true && false) << endl;
	//cout << (false && true) << endl;
	//cout << (false && false) << endl;
	//cout << (true || true) << endl;
	//cout << (true || false) << endl;
	//cout << (false || true) << endl;
	//cout << (false || false) << endl;

	bool b;

	//cin >> b;
	//cout << std::boolalpha;
	//cout << "Your Input : " << b << endl;
	
	return 0;
}