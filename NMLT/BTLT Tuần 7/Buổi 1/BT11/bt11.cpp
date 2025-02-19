#include<iostream>
using namespace std;
void main()
{
	int n, i, k = 0;
	cout << "Nhap So Nguyen Duong N:\n";
	cin >> n;
	for (i = 1; i < n; i++)
	{
		if (n%i==0)
		{
			k = k + i;
		}
	}
	if (k==n)
	{
		cout << n << " la so hoan hao\n";
	}
	else
	{
		cout << n << " khong phai la so hoan hao\n";
	}
	
}