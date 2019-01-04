#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	//char myString[] = "string";	// size = 7, 6+1, null character

	//for (int i = 0; i < 7; i++)
	//{
	//	cout << (int)myString[i] << endl;
	//}

	//char myString[255];
	//cin.getline(myString, 255);
	//int ix = 0;
	//while (true)
	//{
	//	if (myString[ix] == '\0') break;
	//	cout << myString[ix] << " " << (int)myString[ix] << endl;
	//	++ix;
	//}

	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest, 50,source);

	//strcat();
	//strcmp();

	//if (strcmp(source, dest) == 0)	// if same return 0 else return -1
	//{

	//}
	
	

	return 0;
}