#include<iostream>
using namespace std;

int length(char* word)
{
	int count = 0;
	for (int i = 0;word[i] != '\0';i++)
	{
		count++;
	}
	return count;
}

int main()
{
	const int SIZE = 21;
	char word1[SIZE], word2[SIZE];
	do {
		cout << "First word: ";
		cin >> word1;
	} while (length(word1) < 10 || length(word1) > 20);
	do {
		cout << "Second word: ";
		cin >> word2;
	} while (length(word2) < 10 || length(word2) > 20);

	cout << "Max length: ";
	if (length(word1) > length(word2))
	{
		cout << length(word1) << endl;
	}
	else {
		cout << length(word2) << endl;
	}
	char temp;
	for (int i = 0;i < 5;i++)
	{
		temp = word1[i];
		word1[i] = word2[i];
		word2[i] = temp;
	}
	cout << word1 << " " << word2 << endl;



	system("PAUSE");
	return 0;
}