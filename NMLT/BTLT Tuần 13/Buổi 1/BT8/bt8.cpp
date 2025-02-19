#include<iostream>
#define max_dong 50
#define max_cot 100
using namespace std;
void nhaph(int a[][max_cot], int& n)
{
	do
	{
		cout << "Hay nhap chieu cao:\n";
		cin >> n;
	} while (n <= 0);
}
void tamgiac(int a[][max_cot], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i ; j++)
		{
			if (j==0||i==j)
			{
				a[i][j] = 1;
				cout << a[i][j] << "  ";
			}
			else
			{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
				cout<<a[i][j]<<"  ";
			}
		}
		cout << endl;
	}
}
void main()
{
	int arMang2chieu[max_dong][max_cot];
	int h;
	nhaph(arMang2chieu, h);
	tamgiac(arMang2chieu, h);
}