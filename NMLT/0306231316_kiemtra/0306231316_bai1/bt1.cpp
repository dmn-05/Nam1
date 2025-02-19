#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int n, i;
	double s = 0, x;
	cout << "Nhap vao so X:\n";
	cin >> x;
	do
	{
		cout << "Nhap vao so N:\n";
		cin >> n;
	} while (n<=0);
	for ( i = 1; i <= n; i++)
	{
		s += pow(x, i);
	}
	cout << abs(s);
}