#include<iostream>
using namespace std;
void main()
{
	int n, dem = 0, dem1, z, i;
	cout << "Nhap vao so N:\n";
	cin >> n;

	for (i = 1;i <= n; i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}

	if (dem == 2)
	{
		cout << n << " la so nguyen to\n";
	}
	else
	{
		cout << n << " khong la so nguyen to\n";
	}

	cout << "Cac so nguyen to tu 1-" << n << ": ";
	for (z = 2; z <= n; z++)
	{
		dem = 0;
		for ( i = 1; i <= z; i++)
		{
			if (z % i == 0)
			{
				dem++;
			}
		}
		if (dem==2)
		{
			cout << z << " ";
		}
	}
	cout << endl;
	cout << n << " so nguyen to dau tien la: ";
	for (dem1=0, z = 2; dem1<n;z++)
	{
		
		dem = 0;
		i = 1;
		for (; i <= z ; i++)
		{
			if (z % i == 0)
			{
				dem++;
			}
		}
		if (dem == 2)
		{
			cout << z << " ";
			dem1++;
		}
	}
}