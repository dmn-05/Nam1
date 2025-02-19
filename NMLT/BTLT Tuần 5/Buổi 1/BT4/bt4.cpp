#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a>0&&b>0&&c>0)
	{
		if (a+b>c&&b+c>a&&a+c>0)
		{
			if (a==b&&b==c)
			{
				cout << "tam giac deu";
			}
			else if (a==b||b==c||a==c)
			{
				if (pow(a,2)+pow(b,2)==pow(c,2)||pow(b,2)+pow(c,2)==pow(a,2)||pow(a,2)+pow(c,2)==pow(b,2))
				{
					cout << "Tam giac vuong can";
				}
				else
				{
					cout << "Tam giac can";
				}
			}
			else if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2))
			{
				cout << "Tam giac vuong";
			}
			else
			{
				cout << "Tam giac thuong";
			}
		}
		else
		{
			cout << "khong phai ba canh tam giac";
		}
	}
	else
	{
		cout << "Du lieu khong hop le";
	}
}