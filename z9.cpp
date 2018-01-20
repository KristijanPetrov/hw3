#include <iostream>

using namespace std;
void findNumbers(char *string)
{
	int counter = 0;
	bool found = false;
	for (int i = 0;string[i] != '\0';i++)
	{
		counter = 0;
		found = false;
		for (int j = 0;string[j] != '\0';j++)
		{
			if (string[i] == string[j] && j < i)
			{
				found = true;
				break;
			}
			if (string[j] == string[i]) counter++;
		}
		if (found) continue;
		cout << string[i] << " is found " << counter << " times." << endl;
	}
}

int main()
{
	char string[50];
	cin >> string;
	findNumbers(string);

	system("PAUSE");
	return 0;
}