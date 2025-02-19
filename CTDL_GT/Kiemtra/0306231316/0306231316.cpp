/*
0306231316
Do Minh Nhat
CD TH 23D
De le
so may 17
7 diem
*/
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
void xuatmssv_ten(string ten, string mssv)
{
	cout << ten << endl;
	cout << mssv << endl;
}
void sapxep(int a[], int n)
{
	int min,dem=0;
	for (int i = 0; i < n-1; i++)
	{
		min = i;
		for (int j= i+1; j < n; j++)
		{
			if (a[min]>a[j])
			{
				min = j;
				dem++;
			}
		}
		swap(a[i], a[min]);
	}
	cout << "So lan gan min=j la: " << dem<<endl;
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void demx(int a[], int n)
{
	int x,dem=0;
	cout << "Nhap x: ";
	cin >> x;
	for ( int i = 0; i < n; i++)
	{
		if (a[i]==x)
		{
			dem++;
		}
	}
	cout << "co tat ca " << dem << " x trong mang\n";
}
void main()
{
	string ten, mssv;
	int a[100] = { 0,3,0,6,2,3,1,3,1,6 };
	int n = 10;
	ten = "Do Minh Nhat";
	mssv = "0306231316";
	xuatmssv_ten(ten, mssv);
	xuat(a, n);
	sapxep(a, n);
	xuat(a, n);
	do
	{
		demx(a,n);
	} while (_getch()!=27);
}