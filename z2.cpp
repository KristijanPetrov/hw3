#include<iostream>
using namespace std;


int main()
{
	char string[11];
	for (int i = 0;i < 10;i++)
	{
		cin >> string[i];
	}
	int countSmallLetter = 0, countCapLetter = 0, countNumber = 0;
	for (int i = 0;i < 10;i++)
	{
		if (string[i] >= '0' && string[i] <= '9')
			countNumber++;
		if (string[i] >= 'a' && string[i] <= 'z')
			countSmallLetter++;
		if (string[i] >= 'A' && string[i] <= 'Z')
			countCapLetter++;
	}
	cout << "Numbers = " << countNumber << ", Small letters = " << countSmallLetter << ", Capital letters = " << countCapLetter << endl;
	system("PAUSE");
	return 0;
}