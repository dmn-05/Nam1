#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

void nhap(int a[][100], int& n)
{
	cout << "Nhap so luong: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 10;
		}
	}
}
void nhap1(int a[][100],int b[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[i][j] = a[i][j];
		}
	}
}
void xuat(int a[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
void sapxep1(int a[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			for (int k = j+1; k < n; k++)
			{
				if (a[i][j] > a[i][k])
				{
					swap(a[i][j], a[i][k]);
				}
			}
		}
	}
}
void sapxep2(int a[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (a[j][i] > a[k][i])
				{
					swap(a[j][i], a[k][i]);
				}
			}
		}
	}
}
void main()
{
	int a[100][100], b[100][100], n, cn;
	nhap(a, n);
	do
	{
		nhap1(a, b, n);
		cout << "1. sap tang dan theo dong\n";
		cout << "2. sap tang dan theo cot\n";
		cout << "3. sap tang dan theo trai sang phai va tren xuong duoi\n";
		cout << "Nhap chuc nang: ";
		cin >> cn;
		cout << "Mang dau:\n";
		xuat(a, n);
		cout << "Mang sau sap xep:\n";
		switch (cn)
		{
		case 1:
			sapxep1(b, n);
			xuat(b, n);
			break;
		case 2:
			sapxep2(b, n);
			xuat(b, n);
			break;
		case 3:
			sapxep1(b, n);
			sapxep2(b, n);
			xuat(b, n);
			break;
		default:
			cout << "Khong co chuc nang tuong ung\n";
			break;
		}
	} while (_getch()!=27);	
}