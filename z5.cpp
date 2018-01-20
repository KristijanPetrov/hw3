#include<iostream>
using namespace std;

bool letterT(char *string)
{
	for (int i = 0;string[i] != '\0';i++)
	{
		if (string[i] == 'T')
		{
			return true;
		}
	}
	return false;
}
void position(char *string)
{
	for (int i = 0;string[i] != '\0';i++)
	{
		if (string[i] == 'T')
		{
			cout << i + 1 << " ";
		}
	}
}

int main()
{
	char string[50];
	cin >> string;
	if (letterT(string))
	{
		cout << "Your string does have the letter 'T' in position: ";
		position(string);
		cout << endl;
	}
	else
	{
		cout << "Your string does not have the letter 'T' " << endl;
	}

	system("PAUSE");
	return 0;
}