#include <iostream>
using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : private Base
{
public:
	Derived()
	{
		Base::m_public = 123;	// same as this->m_public, m_public
		Base::m_protected = 123;
		//m_private = 123;
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		/*Derived::m_public;		// error
		Derived::m_protected;*/		// error
	}
};

int main()
{
	Derived derived;
	/*derived.m_public = 1024;
	derived.m_protected;
	derived.m_private;*/


	return 0;
}