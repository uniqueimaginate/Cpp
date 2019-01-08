#include <iostream>		// about friend class!
using namespace std;

class B;	// forward declaration

class A
{
private:
	int m_value = 1;

	friend class B;
};

class B
{
private:
	int m_value = 2;

public:
	void doSomething(A& a)
	{
		cout << a.m_value << endl;
	}
};

int main()
{
	A a;
	B b;
	b.doSomething(a);
	return 0;
}