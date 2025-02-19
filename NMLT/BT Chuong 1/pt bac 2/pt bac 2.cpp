#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	float a, b, c, x1, x2, dt;
	cout << "hay nhap a:\n";
	cin >> a;
	cout << "hay nhap b:\n";
	cin >> b;
	cout << "hay nhap c:\n";
	cin >> c;
	if (a==0)
	{
		cout << "PHUONG TRINH BAC 1";
	}
	else
	{
		dt = b * b - 4 * a * c;
		if (dt<0)
		{
			cout << "PHUONG TRINH VO NGHIEM";
		}
		else
		{
			if (dt==0)
			{
				cout << "PHUONG TRINH CO NGHIEM KEP";
				x1 = x2 = -b / (2 * a);
			}
			else
			{
				cout << "PHUONG TRINH CO 2 NGHIEM PHAN BIET";
				x1 = (-b + sqrt(dt)) / (2 * a);
				x2 = (-b - sqrt(dt)) / (2 * a);
			}
		}
		
	}
}