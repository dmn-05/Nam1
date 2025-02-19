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
		for (i = n; i != 0; i--)
		{
			for (j = n; j != 0; j--)
			{
				if (j <= i)
				{
					cout << "* ";
				}
			}
			cout << endl;
		}
	}
}