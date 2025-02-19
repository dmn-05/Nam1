#include<iostream>
#include<conio.h>
using namespace std;

void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
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
	int x, dem = 0;
	cout << "\nNhap so x:";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			dem++;
		}
	}
	cout << "Co " << dem << " so x trong day\n";
}
void timvitrix(int a[], int n)
{
	int x;
	cout << "Nhap so x:";
	cin >> x;
	cout << "so bang gia tri x trong day co vi tri: ";
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			cout << i << " ";
		}
	}
}
void main()
{
	int a[10], n,cn;
	do
	{
		cout << "1. nhap va xuat mang\n";
		cout << "2. dem x trong day\n";
		cout << "3. xuat vi tri x trong day\n";
		cin >> cn;
		switch (cn)
		{
		case 1:
			cout << "Nhap so luong phan tu: ";
			cin >> n;
			nhap(a, n);
			cout << "Mang vua nhap la: ";
			xuat(a, n);
			break;
		case 2:
			demx(a, n);
			break;
		case 3:
			timvitrix(a, n);
			break;
		default:
			cout << "khong co chuc nang tuong ung\n";
			break;
		}
		cout << "Nhan Esc de dung, phim khac de tiep tuc\n";
	} while (_getch()!=27);
	
	
}