#include<iostream>
using namespace std;

char toCap(char letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return letter - 'a' + 'A';
	}
	return letter;
}

int main()
{
	char letter;
	cin >> letter;
	cout << toCap(letter) << endl;
	system("PAUSE");
	return 0;
}