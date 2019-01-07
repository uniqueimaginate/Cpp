#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int> &stack)
{
	for (auto &e : stack)
		cout << e << " ";
	cout << endl;
}

int main()
{
	std::vector<int> stack;

	//v.resize(2);
	//stack.reserve(1024);
	//cout << stack.size() << " " << stack.capacity() << endl;
	// size VS capacity

	stack.push_back(3);
	stack.push_back(5);
	stack.push_back(7);
	printStack(stack);
	stack.pop_back();
	stack.pop_back();
	stack.pop_back();
	printStack(stack);

	return 0;
}