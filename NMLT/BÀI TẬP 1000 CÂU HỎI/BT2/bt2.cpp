#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int n, i, s = 0;
	cout << "Nhap so N:\n";
	cin >> n;
	for ( i = 1; i <=n ; i++)
	{
		s += pow(i, 2);
	}
	cout << "S = " << s;
}