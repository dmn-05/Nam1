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
			for (j = 1; j <= n; j++)
			{
				if (j <=n-i)
				{
					cout << "  ";
				}
				else
				{
					cout << "* ";
				}
			}
			cout << endl;
		}
	}
}