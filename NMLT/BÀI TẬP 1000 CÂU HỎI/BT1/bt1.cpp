#include<iostream>
using namespace std;
void main()
{
	int n, s = 0, i;
	cout << "Nhap so N:\n";
	cin >> n;
	for ( i = 1; i <= n; i++)
	{
		s += i;
	}
	cout << "S = " << s;
}