#include <iostream>

int main()
{
	using namespace std;

	enum class Color
	{
		RED,
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		APPLE,
	};

	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	if (color == fruit)	// can't be compared(class is different), but you can compare by static_cast<int>
		cout << "Color is Fruit ?" << endl;

	return 0;
}
