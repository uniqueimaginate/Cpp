#include <iostream>
using namespace std;
void doSomething(int students_scores[])	// in this case, students_scores is different from main function. it's a copied version
										// pointer
{
	cout << "pointer 변수의 주소(main 함수의 배열주소와는 다르다!) \t\t" << &students_scores << endl;		
											// 포인터 변수도 변수 이기에 기존의 다른 data type의 변수처럼 다른 주소로 복사되는 것은 같다.
											// 따라서 main 함수에 있는 배열의 주소를 받은 pointer 변수 이기 때문에
											// main 함수 배열의 주소 != pointer 변수 주소
											// 그리고 이 pointer 변수에는 main 함수 배열의 주소를 값으로 갖고 있다.

	cout << "pointer 변수의 값에는 main 함수 배열의 주소값이 담겨있다 \t" << *(&students_scores) << endl;	
											// 여기서 받은 pointer 변수를 참조해서 따라가면 main 함수 배열의 주소값을 알려준다.

	cout << **(&students_scores) << endl;
											// 이 코드를 보면 바로 알 수 있듯이
											// pointer 변수의 주소 값을 double pointer를 해서 두번 참조한다면
											// main 함수 배열의 0번 째 element 값을 돌려준다.

	cout << *(*(&students_scores)+1) << endl;
											// pointer 변수의 주소 값에 1을 더해서 double pointer로 두번 참조한다면
											// main 함수 배열의 1번 째 element 값을 돌려준다. 


	// 나머지 코드는 자유롭게 응용해본다면 더 빠르게 이해할 수 있을듯?
	//cout << &students_scores[0] << endl;	
	/*cout << *(students_scores + 1) << endl;

	cout << students_scores[1] << endl;
	cout << &students_scores[1] << endl;
	cout << &students_scores[2] << endl;*/
}

int main()
{
	const int num_students = 20;

	int students_scores[num_students] = { 1,2,3,4,5, };

	cout << "main 함수 배열의 주소 \t \t \t" << &students_scores << endl;
	cout << "main 함수 배열의 0번째 element의 주소 \t" << &(students_scores[0]) << endl;
	cout << "main 함수 배열의 1번째 element의 주소 \t" << &(students_scores[1]) << endl;
	cout << "main 함수 배열의 2번째 element의 주소 \t" << &(students_scores[2]) << endl;
	cout << "main 함수 배열의 3번째 element의 주소 \t" << &(students_scores[3]) << endl;

	cout << "\nIn doSomething" << endl;

	doSomething(students_scores);

	//cout << sizeof(students_scores) << endl;

	return 0;
}