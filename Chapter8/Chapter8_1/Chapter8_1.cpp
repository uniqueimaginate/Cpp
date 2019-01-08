#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Friend
{
public:
	string	name;
	string	address;
	int		age;
	double	height;
	double	weight;

	void print()
	{
		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
	}
	// this is also okay!
	// this is only available in c++! (not only class but structure)
	// but usually functions are in class not structure
};

void print(Friend &fr)
{
	cout << fr.name << " " << fr.address << " " << fr.age << " " << fr.height << " " << fr.weight << endl;
}

void print(const string &name, const string &address, const int &age, const double &height, const double &weight)
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}

int main()
{
	Friend jj{"Jack Jack", "Uptown", 2, 30, 10};	// instanciation, instance
	/*jj.name = "Jack Jack";
	jj.age = 2;
	jj.address = "Uptown";*/

	print(jj.name, jj.address, jj.age, jj.height, jj.weight);
	print(jj);
	jj.print();

	vector<Friend> my_friends;
	my_friends.resize(2);

	for (auto &ele : my_friends)
		ele.print();

	return	0;
}