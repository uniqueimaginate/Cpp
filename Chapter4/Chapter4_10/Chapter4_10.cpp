#include <iostream>
#include <string>

using namespace std;

struct Employee		// 2 + (2) + 4 + 8 + 16 // padding
{
	short	id;		// 2 bytes
	int		age;	// 4 bytes
	double	wage;	// 8 bytes
};

struct Person
{
	double	height;
	float	weight;
	int		age;
	string	name;

	void print()
	{
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};

struct Family
{
	Person me, mom, dad;
};

Person getMe()
{
	Person me{ 2.0, 100.0, 20, "Jack Jack" };

	return me;
}

//void printPerson(Person ps)
//{
//	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
//	cout << endl;
//}

int main()
{
	Person me{2.0, 100.0, 20, "Jack Jack"};
	Person me2;
	me2 = me;
	me2.print();
	
	me.print();
	//printPerson(me);
	//me.age = 20;
	//me.name = "Jack Jack";
	//me.height = 2.0;
	//me.weight = 100.0;

	Person me_from_func = getMe();
	me_from_func.print();

	cout << sizeof(Employee) << endl;

	return 0;
}