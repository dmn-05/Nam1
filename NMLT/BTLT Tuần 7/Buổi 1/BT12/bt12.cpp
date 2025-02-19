#include<iostream>
using namespace std;
void main()
{
	int n, dem=0, i;
	cout << "Nhap vao so N:\n";
	cin >> n;
	for (i = 1;i <= n; i++)
	{
		if (n%i==0)
		{
			dem++;
		}
	}
	if (dem==2)
	{
		cout << n << " la so nguyen to\n";
	}
	else
	{
		cout << n << " khong la so nguyen to\n";
	}

}