#include <iostream>
#include <bitset> //library which converts to binary number

int main()
{
	using namespace std;

	// << left shift
	// >> right shift
	// ~, &, |, ^ 

	/*unsigned int a = 3;
	cout << std::bitset<4>(a) << endl;

	unsigned int b = a << 1;
	cout << std::bitset<4>(b) << endl;*/

	//unsigned int a = 3;
	//cout << std::bitset<8>(a) << endl;
	//cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
	//cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
	//cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
	//cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;

	//unsigned int a = 1024;
	//cout << std::bitset<16>(a) << endl;
	//cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
	//cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
	//cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
	//cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;

	//unsigned int a = 1024;
	//cout << std::bitset<16>(a) << endl;
	//cout << std::bitset<16>(~a) << " " << (~a) << endl;

	//unsigned int a = 0b1100;	//binary expression
	//unsigned int b = 0b0110;

	//cout << std::bitset<4>(a & b) << endl;
	//cout << std::bitset<4>(a | b) << endl;
	//cout << std::bitset<4>(a ^ b) << endl;


	return 0;
}