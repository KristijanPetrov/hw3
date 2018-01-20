#include<iostream>
using namespace std;

int length(char *text)
{
	if (text[0] == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + length(text + 1);
	}
}

int main()
{
	char text[30] = "khausgdubcbmbzhg";
	cout << length(text) << endl;

	system("PAUSE");
	return 0;
}