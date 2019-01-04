#include <iostream>

using namespace std;

// void pointer, generic pointer


int main()
{
	int			i = 5;
	float		f = 3.0;
	char		c = 'a';

	void *ptr = nullptr;

	ptr = &i;
	ptr = &f;
	//ptr = &c;

	cout << &f << " "<< ptr <<endl;
	//cout << *ptr << endl;		// *ptr is impossible because it's a void pointer
	cout << *static_cast<float*>(ptr) << endl;	// this is possible!

	return 0;
}