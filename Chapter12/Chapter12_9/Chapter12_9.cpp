#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Base
{
public:
	int m_i = 0;
	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

//void doSomething(Base & b)	// polymorphism
//{
//	b.print();
//}

void doSomething(Base b)	// non-polymorphism
{
	b.print();
}

int main()
{
	Derived d;
	//Base &b = d;		// case 1
	//b.print();		// at this you can use polymorphism.

	//Base b = d;		// case 2
	//b.print()			// you can't use polymorphism.

	//doSomething(d);	// case 3 : non-polymorpism.

	Base b;

	std::vector<std::reference_wrapper<Base>> my_vec;	// case 4 : using vector & refenrence with reference_wrapper
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto & ele : my_vec)
		ele.get().print();

	return 0;
}