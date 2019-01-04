#include <iostream>

using namespace std;

void doSomething(int students_scores[])	// in this case, students_scores is different from main function. it's a copied version
										// pointer
{
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
}

int main()
{
	const int num_students = 20;

	int students_scores[num_students] = { 1,2,3,4,5, };

	cout << &students_scores << endl;
	cout << &(students_scores[0]) << endl;
	cout << &(students_scores[1]) << endl;
	cout << &(students_scores[2]) << endl;
	cout << &(students_scores[3]) << endl;

	doSomething(students_scores);

	cout << sizeof(students_scores) << endl;

	return 0;
}