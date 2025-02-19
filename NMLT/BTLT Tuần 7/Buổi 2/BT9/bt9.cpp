#include<iostream>
using namespace std;
void main()
{
	int n, i = 1, b, a,ucln;
	cout << "Nhap vao so thu 1: ";
	cin >> a;
	cout << "Nhap vao so thu 2: ";
	cin >> b;
	n = a * b;	
	while (a*b!=0)
	{
		if (a < b)
		{
			b = b % a;
		}
		else
		{
			a = a % b;
		}
	}
	if (a == 0)
	{
		ucln = b;
	}
	else
	{
		ucln = a;
	}
	cout << "boi chung lon nhat la: " << n / ucln << endl;
}