#include <iostream>
using namespace std;

// inline 함수는 언제나 빠른것이 아니다. 컴파일러한테 권유 하는 느낌이지
// 강제로 항상 inline 을 쓰는 것이 아니다.

inline int min(int x, int y)	
{
	return x > y ? y : x;
}

int main()
{
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;

	cout << (5 > 6 ? 6 : 5) << endl;	// inline 함수는 다음과 같이 된다.
	cout << (3 > 2 ? 2 : 3) << endl;

	return 0;
}