#include<iostream>
using namespace std;


int main()
{
	char A = 'A';
	int count = 65;
	for (int i = 0;A <= 'Z';i++)
	{
		cout << A << " = " << count; 
		if (count % 2 == 1)
		{
			cout << ", ";
		}
		else
		{
			cout << endl;
		}
		A++;
		count++;
	}
	system("PAUSE");
	return 0;
}