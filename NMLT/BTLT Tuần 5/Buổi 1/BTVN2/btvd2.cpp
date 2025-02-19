#include<iostream>
using namespace std;
void main()
{
	float a, b, x;
	cin >> a >> b;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "PTVSN";
		}
		else
		{
			cout << "PTVN";
		}
	}
	else
	{
		x = -b / a;
		cout << "xuat x: " << x;
	}
}