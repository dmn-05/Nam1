#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

void nhap(int a[], int& n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:";
		cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	cout << "Mang vua nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void nhapnn(int a[], int& n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}
}
void interchangesort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
				for (int k = 0; k < n; k++)
				{
					cout << a[k] << " ";
				}
				cout << endl;
			}
		}
	}
}
void selectionsort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[min] > a[j])
			{
				min = j;
			}
		}
		swap(a[min], a[i]);
		for (int k = 0; k < n; k++)
		{
			cout << a[k] << " ";
		}
		cout << endl;
	}
}
void main()
{
	int a[100]={5,6,7,8,4,2,3,9,1,0}, n=10,cn;
	do
	{
		cout << "1.Nhap tu ban phim\n";
		cout << "2.Nhap ngau nhien N phan tu\n";
		cout << "3.Sap xep theo Interchange\n";
		cout << "4.Sap xep theo Seclection\n";
		cin >> cn;
		switch (cn)
		{
		case 1:
			nhap(a, n);
			break;
		case 2:
			nhapnn(a, n);
			break;
		case 3:
			interchangesort(a, n);
			break;
		case 4:
			selectionsort(a, n);
			break;
		default:
			cout << "Khong co chuc nang\n";
			break;
		}
	} while (_getch()!=27);
}