#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int u, n, tong=0;
	do
	{
		cout << "Nhap vao so N:\n";
		cin >> n;
	} while (n <= 0);
	for ( u = 1; u <= n; u++)
	{
		if (n%u==0&&u%2==0)
		{
			tong += u;
		}
	}
	cout << "Tong cac uoc chan cua N la: " << tong;
}