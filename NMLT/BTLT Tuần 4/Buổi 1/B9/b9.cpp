#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int n, i;
	cout << "hay nhap so nguyen:\n";
	cin >> n;
	i = sqrt(n);
	if (i*i==n)
	{
		cout << "so chinh phuong";
	}
	else
	{
		cout << "khong phai so chinh phuong";
	}
}