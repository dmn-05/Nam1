#include<iostream>
using namespace std;
void main()
{
	int i, j, n;
	while (true)
	{
		cout << "Nhap vao kich thuoc hinh vuong (-1 de ket thuc): ";
		cin >> n;
		if (n == -1)
		{
			break;
		}
		for (i = 1; i <= n; i++)
		{
			j = 1;
			if (i == 1||i==n)
			{
				for (; j <= n; j++)
				{
					cout << "* ";
				}
				cout << endl;
			}
			else 
			{
				for (; j <= n; j++)
				{
					if (j==1||j==n)
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}

		}
	}
}