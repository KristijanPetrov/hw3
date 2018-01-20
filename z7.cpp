#include<iostream>
using namespace std;

double power(int a, int b)
{
	if (b < 0)
	{
		return 1 / power(a, -b);
	}
	else if (b > 0)
	{
		return a*power(a, b - 1);
	}
	else
	{
		return 1;
	}


}

int main()
{
	int num1, num2;
	do {
		cout << "Number1 = ";
		cin >> num1;
	} while (num1 > 100 || num1 < -100);
	do {
		cout << "Number2 = ";
		cin >> num2;
	} while (num2 > 100 || num2 < -100);
	cout << power(num1, num2) << endl;




	system("PAUSE");
	return 0;
}