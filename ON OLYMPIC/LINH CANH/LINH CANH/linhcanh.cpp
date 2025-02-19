#include<iostream>
using namespace std;
void nhap(int a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
int sln(int a[], int n)
{
	int LC = -1;
	int LC2 = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			if (LC == -1 || a[LC] < a[i])
			{
				LC2 = LC;
				LC = i;
			}
			else if (LC2 == -1 || (a[i] > a[LC2]&&a[i]!=a[LC]))
			{
				LC2 = i;
			}
		}
	}
	return LC2;
}
int main()
{
	int a[100];
	int n;
	nhap(a, n);
	cout << sln(a, n);
}