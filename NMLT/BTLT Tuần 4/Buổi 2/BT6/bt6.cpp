#include<iostream>
using namespace std;
void main()
{
	int a, b, c, d, e, so, chan=0, le=0;
	cin >> so;//12345
	if (so >= 10000 && so <= 99999)
	{
		e = so % 10;//12340 du 5
		so = so / 10;//1234 
		d = so % 10;//1230 du 4
		so = so / 10;//123
		c = so % 10;//120 du 3
		so = so / 10;//12
		b = so % 10;//10 du 2
		so = so / 10;//1
		a = so;//1
		if (a % 2 == 0)
		{
			chan += 1;
		}
		else
		{
			le += 1;
		}
		if (b % 2 == 0)
		{
			chan += 1;
		}
		else
		{
			le += 1;
		}
		if (c % 2 == 0)
		{
			chan += 1;
		}
		else
		{
			le += 1;
		}
		if (d % 2 == 0)
		{
			chan += 1;
		}
		else
		{
			le += 1;
		}
		if (e % 2 == 0)
		{
			chan += 1;
		}
		else
		{
			le += 1;
		}
		cout << "so le:" << le << endl;
		cout << "so chan:" << chan;
	}
	else
	{
		cout << "Nhap sai";
	}
} // 67678 abcde 