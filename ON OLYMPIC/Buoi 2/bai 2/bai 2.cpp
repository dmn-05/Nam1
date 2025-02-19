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
}
void taosinh(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << i << j << " ";
		}
	}
}
int main()
{
	int a[100], n;
	nhiphan(a, n);
	taosinh(a, n);
	return 0;
}