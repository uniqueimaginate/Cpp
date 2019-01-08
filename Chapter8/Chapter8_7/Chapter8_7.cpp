#include <iostream>

using namespace std;

class Calc
{
private:
	int m_value;
public:
	Calc(int init_value)
		: m_value(init_value)
	{}

	/*void add(int value) { m_value += value; }
	void sub(int value) { m_value -= value; }
	void mult(int value) { m_value *= value; }*/

	Calc& add(int value) { m_value += value; return *this; }		// chaining member function
	Calc& sub(int value) { m_value -= value; return *this; }
	Calc& mult(int value) { m_value *= value; return *this; }

	void print()
	{
		cout << m_value << endl;
	}
};

class Simple
{
private: int m_id;

public:
	Simple(int id)
	{
		setID(id);
		cout << this << endl;		// display it's own address
	}

	void setID(int id) { m_id = id; }
	int getID() { return m_id; }
};

int main()
{
	Simple s1(1), s2(2);
	s1.setID(2);
	s2.setID(4);

	cout << &s1 << " " << &s2 << endl;

	Calc cal(10);
	cal.add(10).sub(1).mult(2).print();			// interesting!
	/*cal.add(10);
	cal.sub(1);
	cal.mult(2);*/

	cal.print();

	return 0;
}