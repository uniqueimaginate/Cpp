#include <iostream>

namespace a
{
	int my_var(10);

}

namespace b
{
	int my_var(20);
}

int main()
{
	using namespace std;
	//using namespace a;
	//using namespace b;

	//cout << a::my_var << endl;
	//cout << b::my_var << endl;

	//or you can use like this

	//{
	//	using namespace a;
	//	cout << my_var << endl;
	//}
	//{
	//	using namespace b;
	//	cout << my_var << endl;
	//}

	return 0;
}