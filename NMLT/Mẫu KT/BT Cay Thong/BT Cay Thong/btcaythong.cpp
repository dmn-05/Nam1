#include<iostream>
using namespace std;
void main()
{
	int i, j, k, n;
	cout << "Nhap chieu cao cay thong:\n";
	cin >> n;
	for ( i = 1; i <= n; i++)
	{
		for ( j = 1; j <= n-1; j++)
		{
			cout << " ";
		}
		for (k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}
		cout<<endl;
	}
	for ( i = 1; i <= n; i++)
	{
		if (i==1)
		{
			continue;
		}
		for (j = 1; j <= n-1; j++)
		{
			cout << " ";
		}
		for (k = 2; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for ( i = 1; i <= 3; i++)
	{
		for ( j = 1; j <= n-2; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
}
