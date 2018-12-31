#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	using namespace std;

	float f(123456789.0f); // 10 significant digits
	
	cout << std::setprecision(9);
	cout << f << endl;

	double d(0.1);

	cout << d << endl;
	cout << std::setprecision(17);
	cout << d << endl;

	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << setprecision(17);

	cout << d1 << endl;
	cout << d2 << endl;

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << " " << std::isnan(posinf) << endl;
	cout << neginf << " " << std::isnan(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;

/*
	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;
*/
	return 0;
}