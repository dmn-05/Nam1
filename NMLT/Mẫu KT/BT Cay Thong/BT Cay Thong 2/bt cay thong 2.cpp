#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	int n;
	cout << "Nhap chieu cao cay thong:\n";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i <= n / 2 + 1)
		{
			for (int j = 1; j <= n - i; j++)
			{
				cout << "   ";
			}
			for (int k = 1; k <= (2 * i - 1); k++)
			{
				cout << "*  ";
			}
			cout << endl;
		}
		else if (i > n / 2 + 1 && i != n)
		{
			for (int j = 1; j <= n - 2; j++)
			{
				cout << "   ";
			}
			for (int j = 1; j <= 3; j++)
			{
				cout << "*  ";
			}
			cout << endl;
		}
		else if (i == n)
		{
			for (int i = 1; i < n - i; i++)
			{
				cout << "   ";
			}
			if (n % 2 == 0)
				for (int j = 1; j <= n + 1; j++)
				{
					cout << "*  ";
				}
			else
			{
				for (int j = 1; j <= n; j++)
				{
					cout << "*  ";
				}
			}
			cout << endl;
		}
	}
}