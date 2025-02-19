#include<iostream>

using namespace std;

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
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
		quicksort(a, l, j);
		cout << "DAY: ";
		for (int k = l; k <= j; k++)
		{
			cout << a[k] << "  ";
		}
		cout << endl;
	}
	if (i<r)
	{
		quicksort(a, i, r);
		cout << "DAY: ";
		for (int k = i; k <= r; k++)
		{
			cout << a[k] << "  ";
		}
		cout << endl;
	}
}
void main()
{
	int a[100] = { 0,3,6,2,3,1,3,1,6 }, n = 10;
	xuat(a, n);
	quicksort(a, 0, n - 1);
	xuat(a, n);
}