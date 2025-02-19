#include<iostream>
using namespace std;
void main()
{
	int a, b, c, d, e, so;
	cin >> so;
	if (so >= 10000 && so <= 99999)
	{
		//12345
		e = so % 10;//5
		so = so / 10;//1234
		d = so % 10;//4
		so = so / 10;//123
		c = so % 10;//3
		so = so / 10;//12
		b = so % 10;//2
		so = so / 10;//1
		a = so % 10;//1
		if (a == e && b == d)
		{
			cout << "la so doi xung";
		}
		else
		{
			cout << "khong la so doi xung";
		}
	}
	else
	{
		cout << "nhap sai";
	}
}
