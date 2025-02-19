#include<iostream>
using namespace std;
void main()
{
	int i, dem, j, k = 2;
	for ( i = 3; i <= 100000 ; i+=2)
	{
		if (i % 5 == 0||i%2==0)
		{
			continue;
		}
		dem = 0;
		for ( j = 1; j <= i; j++)
		{
			if (i%j==0)
			{
				dem++;
			}
		}
		if (dem==2)
		{
			k++;
		}
	}
	cout << "co tat ca " << k << " so nguyen to";
}