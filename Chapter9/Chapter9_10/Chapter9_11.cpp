#include <cassert>
#include <iostream>
using namespace std;

class MyString
{
public:
	char *m_data = nullptr;							// address & variables copy => shallow copy
	int m_length;

public:
	MyString(const char *source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; i++)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';
	}

	//	this is optional : if you cant make copy constuctor 
	//	but you want to protect from shallow copy then use 'delete'
	//	MyString(const MyString &source) = delete;

	MyString(const MyString &source)
	{
		cout << "Copy constructor " << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];			// allocate new memory
													// copy the elements in source = deep copy

			for (int i = 0; i < m_length; i++)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

	MyString& operator = (const MyString & source)
	{
		cout << "Assignment operator " << endl;

		if (this == &source)	// prevent self-assignment
			return *this;

		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}

		else
			m_data = nullptr;

		return *this;
	}


	~MyString()
	{
		delete[] m_data;
	}

	char* getString() { return m_data; }
	int getLength() { return m_length; }
};


int main()
{
	MyString hello("Hello");

	MyString str1 = hello;	// copy constructor cf) == MyString str1(hello)
	MyString str2;

	str2 = hello;			// assignment constructor
	
	/*cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;
	
	{
		MyString copy = hello;
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	}

	cout << hello.getString() << endl;*/

	return 0;
}