#include<iostream>
using namespace std;
void main()
{
	float a, b, c, d;
	cout << "Hay nhap A:\n";
	cin >> a;
	cout << "Hay nhap B:\n";
	cin >> b;
	cout << "Hay nhap C:\n";
	cin >> c;
	cout << "Hay nhap D:\n";
	cin >> d;
	if (b>a&&c>a&&d>a)
	{
		cout << "A nho nhat";
	}
	else
	{
		if (a>b&&c>b&&d>b)
		{
			cout << "B nho nhat";
		}
		else
		{
			if (a>c&&b>c&&d>c)
			{
				cout << "C nho nhat";
			}
			else
			{
				cout << "D nho nhat";
			}
		}
	}
}