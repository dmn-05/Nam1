#include<iostream>
using namespace std;

void KhoiTao(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
	}
}
void SinhHoanvi(int a[], int n, bool& check)
{
	int i = n-2;
	while (i>=0&&a[i]>a[i+1])
	{
		--i;
	}
	if (i<0)
	{
		check = 0;
	}
	else
	{
		int j = n-1;
		while (a[i]>a[j])
		{
			j--;
		}
		swap(a[i], a[j]);
		int l = i+1 ;
		int r = n-1;
		while (l<r)
		{
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}
}
void main()
{
	int a[100];
	int n = 4;
	int dem = 0;
	bool check = 1;
	KhoiTao(a, n);
	while (check)
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i];
		}
		dem++;
		cout << "\n";
		SinhHoanvi(a, n, check);
	}
}