#include <iostream>
using namespace std;
void doSomething(int students_scores[])	// in this case, students_scores is different from main function. it's a copied version
										// pointer
{
	cout << "pointer ������ �ּ�(main �Լ��� �迭�ּҿʹ� �ٸ���!) \t\t" << &students_scores << endl;		
											// ������ ������ ���� �̱⿡ ������ �ٸ� data type�� ����ó�� �ٸ� �ּҷ� ����Ǵ� ���� ����.
											// ���� main �Լ��� �ִ� �迭�� �ּҸ� ���� pointer ���� �̱� ������
											// main �Լ� �迭�� �ּ� != pointer ���� �ּ�
											// �׸��� �� pointer �������� main �Լ� �迭�� �ּҸ� ������ ���� �ִ�.

	cout << "pointer ������ ������ main �Լ� �迭�� �ּҰ��� ����ִ� \t" << *(&students_scores) << endl;	
											// ���⼭ ���� pointer ������ �����ؼ� ���󰡸� main �Լ� �迭�� �ּҰ��� �˷��ش�.

	cout << **(&students_scores) << endl;
											// �� �ڵ带 ���� �ٷ� �� �� �ֵ���
											// pointer ������ �ּ� ���� double pointer�� �ؼ� �ι� �����Ѵٸ�
											// main �Լ� �迭�� 0�� ° element ���� �����ش�.

	cout << *(*(&students_scores)+1) << endl;
											// pointer ������ �ּ� ���� 1�� ���ؼ� double pointer�� �ι� �����Ѵٸ�
											// main �Լ� �迭�� 1�� ° element ���� �����ش�. 


	// ������ �ڵ�� �����Ӱ� �����غ��ٸ� �� ������ ������ �� ������?
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

	cout << "main �Լ� �迭�� �ּ� \t \t \t" << &students_scores << endl;
	cout << "main �Լ� �迭�� 0��° element�� �ּ� \t" << &(students_scores[0]) << endl;
	cout << "main �Լ� �迭�� 1��° element�� �ּ� \t" << &(students_scores[1]) << endl;
	cout << "main �Լ� �迭�� 2��° element�� �ּ� \t" << &(students_scores[2]) << endl;
	cout << "main �Լ� �迭�� 3��° element�� �ּ� \t" << &(students_scores[3]) << endl;

	cout << "\nIn doSomething" << endl;

	doSomething(students_scores);

	//cout << sizeof(students_scores) << endl;

	return 0;
}