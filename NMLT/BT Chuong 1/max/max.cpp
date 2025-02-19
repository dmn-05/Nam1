#include<iostream>
using namespace std;
void main()
{
	int a, b, c, max;
	cout << "hay nhap a:\n";
	cin >> a;
	cout << "hay nhap b:\n";
	cin >> b;
	cout << "hay nhap c:\n";
	cin >> c;
	max = a;
	if (b > max)
	{
		max = b;
	}
	else
	{
		max = max;
	}

	if (c > max)
	{
		max = c;
	}
	else
	{
		max = max;
	}
	cout << "max la:" << max;
}