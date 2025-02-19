#include<iostream>
using namespace std;
void main()
{
	int j, i, n;
	cout << "Nhap n:\n";
	cin >> n;
	for ( i = 1; i <= n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
	for ( j = 1; j <= n; j++)
	{
		for ( i = 1; i <= n; i++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}