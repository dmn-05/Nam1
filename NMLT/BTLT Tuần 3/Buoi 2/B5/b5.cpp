#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	float x, fx;
	cout << "hay nhap x\n";
	cin >> x;
	if (x>0)
	{
		fx = pow(x, 2) + 3 * x + 5;
	}
	else
	{
		fx = pow(-x,2) - 3 * x - 5;
	}
	cout << "fx co gia tri la: " << fx;
}