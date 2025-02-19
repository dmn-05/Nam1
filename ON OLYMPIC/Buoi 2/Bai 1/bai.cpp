#include<iostream>
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
void taosinh(int a[], int n)
{
	for (int k = 0; k < n; k++)
	{
		cout << a[k];
	}
	cout << " ";
	for (int i = n - 1;i>=0; i--)
	{
		if (a[i] == 0)
		{
			a[i] = 1;
			for (int j = i+1; j < n; j++)
			{
				a[j] = 0;
			}
			for (int k = 0; k < n; k++)
			{
				cout << a[k];
			}
			cout << " ";
			i = n;
		}
	}
}
void out(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << "\t";
}
int main()
{
	int a[100],n;
	nhiphan(a, n);
	taosinh(a, n);
	return 0;
}