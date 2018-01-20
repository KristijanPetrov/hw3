#include<iostream>
using namespace std;

void binaryNumber(int num)
{
	if (num <= 1) 
	{
		cout << num;
		return;
	}
	binaryNumber(num / 2);
	cout << num % 2;
}


int main()
{
	int num = 0;
	do{
		cout << "Enter a positive number ";
		cin >> num;
	} while (num < 0 || num > 999999);
	binaryNumber(num);
	cout << endl;


	system("PAUSE");
	return 0;
}