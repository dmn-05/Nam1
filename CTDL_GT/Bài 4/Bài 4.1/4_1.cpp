#include<iostream>
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
		cout << a[i]<<" ";
	}
	cout << endl;
}
void quicksort(int a[], int l, int r)
{
	int i = l, j = r;
	int x = a[(l + r) / 2];
	cout << "x=" << x << endl;
	do
	{
		while (x>a[i])
		{
			i++;
		}
		while (x<a[j])
		{
			j--;
		}
		if (i<=j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	} while (i<=j);
	if (l<j)
	{
		cout << "DAY: ";
		for (int k = l; k <= j; k++)
		{
			cout << a[k] << "  ";
		}
		cout << endl;
		quicksort(a, l, j);
	}
	if (i<r)
	{
		cout << "DAY: ";
		for (int k = i; k <= r; k++)
		{
			cout << a[k] << "  ";
		}
		cout << endl;
		quicksort(a, i, r);
	}
}
void main()
{
	int a[100], n;
	cout << "nhap so luong phan tu: ";
	cin >> n;
	nhap(a, n);
	xuat(a, n);
	quicksort(a,0,n-1);
	xuat(a, n);
}