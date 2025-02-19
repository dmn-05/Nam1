#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int LinearSearch1(int a[], int n, int x)
{
	int i = 0;
	while (i < n && a[i] != x)
	{
		i++;
	}
	if (i==n)
	{
		return -1;
	}
	return i;
}
int LinearSearch2(int a[], int n, int x)
{
	int i = 0;
	a[n] = x;
	while (a[i] != x)
	{
		i++;
	}
	if (i == n)
	{
		return -1;
	}
	return i;
}
int LinearSearch3(int a[], int n, int x)
{
	int kt = true;
	for (int i = 0; i < n; i++)
	{
		if (a[i]==x)
		{
			cout << i << " ";
			kt = false;
		}
	}
	if (kt)
	{
		cout << "khong co\n";
	}
	return 0;
}
void nhap(int a[], int& n)
{
	cout << "Nhap N: \n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}
}
void main()
{
	int a[100] = {1,2,3};
	int n=3, x;
	//nhap(a, n);
	do
	{
		cout << "Nhap so can tim\n";
		cin >> x;
		//cout << LinearSearch1(a,n,x) << endl;
		//cout << LinearSearch2(a, n, x) << endl;
		LinearSearch3(a, n, x);
		cout << endl;
		cout << "Nhan Esc de dung, phim khac de tiep tuc\n";
	} while (_getch()!=27);
}