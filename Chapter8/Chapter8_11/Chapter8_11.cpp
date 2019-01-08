#include <iostream>
using namespace std;

class Something
{
public:
	class _init			// inner class
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;

public:
	Something()
		: m_value(123) /*s_value(1024)*/	// static value can't be initialized by constuctor
	{}

	static int getValue()
	{
		//return this->s_value;		// this makes an error
		//return this->m_value;		// this also makes an error
									// static function can access to static variables
		return s_value;
	}

	int temp()
	{
		return this->s_value;
	}
};

int Something::s_value = 1024;
Something::_init Something::s_initializer;		// inner class

int main()
{
	cout << Something::getValue() << endl;

	Something s1,s2;
	cout << s1.getValue() << endl;

	int (Something::*fptr1)() = &Something::temp;
	cout << (s2.*fptr1)() << endl;

	int(*fptr2)() = &Something::getValue;
	cout << fptr2() << endl;

	return 0;
}