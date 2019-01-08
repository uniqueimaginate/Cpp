#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	//int m_value = 0;
	string m_value = "default";


	// const vs non const -> it can be overloading!
	const string& getValue() const { 
		cout << "const version" << endl;
		return m_value;
	}
	string& getValue() { 
		cout << "non-const version" << endl;
		return m_value;
	}

	/*Something(const Something& st_in)
	{
		m_value = st_in.m_value;

		cout << "Copy constructor" << endl;
	}
		Something()
	{
		cout << "Constructor" << endl;
	}
		void setValue(int value) { m_value = value; }

	int getValue() const
	{
		return m_value;
	}*/
};

//void print(const Something &st)		// const reference!
//{
//	cout << st.getValue() << endl;
//}

int main()
{
	//const Something something;		// only const member function can be used
	//cout << something.getValue() << endl;

	/*Something something1;
	print(something1);*/

	Something something;
	something.getValue() = 10;		// it's okay

	const Something something2;
	something2.getValue();


	return 0;
}