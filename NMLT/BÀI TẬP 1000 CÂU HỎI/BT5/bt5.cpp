#include<iostream>
using namespace std;
void main()
{
	double n, s = 0, i;
	cout << "Nhap so N:\n";
	cin >> n;
	for ( i = 0; i <= n ; i++)
	{
		s += 1 / (2 * i + 1);
	}
	cout << "S = " << s;
}
