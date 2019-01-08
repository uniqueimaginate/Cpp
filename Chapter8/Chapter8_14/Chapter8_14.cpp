#include <iostream>
class Fruit
{
public:
	enum class FruitType		// use this nested type for specific(Æ¯Á¤) class
	{
		APPLE, BANANA, CHERRY,
	};

private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	Fruit apple(Fruit::FruitType::APPLE);

	if (apple.getType() == Fruit::FruitType::APPLE)
	{
		std::cout << "Apple" << std::endl;
	}

	return 0;
}