#include<iostream>
using namespace std;
void main()
{
	double n, s = 0, i;
	cout << "Nhap vao so N:\n";
	cin >> n;
	for ( i = 1; i <= n; i++)
	{
		s += 1 / (2 * i);
	}
	cout << "S = " << s;
}