#include<iostream>
using namespace std;
void main()
{
	double n, i, s = 0;
	cout << "Nhap vao so N:\n";
	cin >> n;
	for ( i = 1; i <= n; i++)
	{
		s += 1 / (i * (i + 1));
	}
	cout << "S = " << s;
}