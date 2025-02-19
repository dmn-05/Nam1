#include<iostream>
#include<Windows.h>
using namespace std;
void nhiphan(int a[], int& n)
{
	cout << "Nhap N: ";
	cin >> n;
	if (n == 0)
	{
		exit(1);
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
}
int dem01(int a[], int n)
{
	int dem = 0;
	system("color 0A");
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == 0)
		{
			a[i] = 1;
			for (int j = i + 1; j < n; j++)
			{
				a[j] = 0;
			}
			for (int k = 0; k < n; k++)
			{
				if (a[k]==0&&a[k+1]==1)
				{
					dem ++;
				}
			}
			cout << endl;
			i = n;
		}
	}
	return dem;
}
void out(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << " ";
}
int main()
{
	int a[100], n;
	nhiphan(a, n);
	cout<<dem01(a, n);
	return 0;
}