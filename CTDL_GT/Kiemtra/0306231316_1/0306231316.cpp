/*
0306231316
Do Minh Nhat
CD TH 23D
De le
so may 17
10 diem
*/
#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
void nhaptrai(int a[], int& n)
{
	cout << "so luong nam: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void nhapgai(int b[], int& m)
{
	cout << "so luong nu: ";
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cout << "b[" << i << "]=";
		cin >> b[i];
	}
}
void tim(int a[], int b[], int n, int m)
{
	int kq,dem=0;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i]==a[j])
			{
				a[j] = -999+j*2;
			}
		}
	}
	for (int i = 0; i < m-1; i++)
	{
		for (int j = i+1; j < m; j++)
		{
			if (b[i]==b[j])
			{
				b[j] = -888+j*2;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (pow(a[i]-b[j],2)==1)
			{
				dem++;
			}
		}
	}
	cout << dem <<endl;
}
void main()
{
	int a[100], b[100],m,n;
	nhaptrai(a, n);//1 4 6 2
	nhapgai(b, m);// 5 1 5 7 9
	tim(a, b, n, m);
}