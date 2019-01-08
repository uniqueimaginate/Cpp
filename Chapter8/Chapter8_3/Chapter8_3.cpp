#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(const int& num_in, const int& den_in = 1)		// constructor & default value
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction() constructor" << endl;
	}
	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec;		// class in class
	
public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	//Fraction frac;	// if constructor has no parameter than there is no ().
						// I mean you should not use frac()
	//frac.print();

	Fraction one_thirds(1,3);
	//Fraction one_thirds = Fraction{ 1,3 };	// copy, this is not recommended
	one_thirds.print();


	/*Fraction one_thirds{ 1.0, 3 };		// uniform initializer -> cannot change data type. ex) int -> double is impossible
	Fraction one_thirds(1.0, 3);*/			// this can change data type

	First fir;

	return 0;
}