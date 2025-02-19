#include<iostream>
using namespace std;
void main()
{
	int i, j, z, n, k;
	while (true)
	{
		cout << "Nhap chieu cao cay thong (-1 de ket thuc): ";
		cin >> n;
		if (n==-1)
		{
			break;
		}
		for ( i = 1; i <= n;i++)
		{
			k = 0;
			for (z = 0, j = 1; j <= n; j++)
			{
				if (k == 1)
				{
					if (j == (n / 2) + 1)
					{
						cout << "* ";
					}
					else
					{
						cout << "0 ";
					}
				}
				else
				{
					if (j==(n/2)+j||j==(n/2)+1||j==(n/2)-z)
					{
						cout << "* ";
					}
					else
					{
						cout << "1 ";
					}
				}
				k++;
			}
			cout << endl;
		}
	}
}