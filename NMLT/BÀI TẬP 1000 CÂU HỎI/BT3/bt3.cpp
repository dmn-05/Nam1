#include<iostream>
using namespace std;
void main()
{
	int n;
	double s = 0;
	cout << "Nhap so N:\n";
	cin >> n;
	for (double i = 1; i <= n; i++)
	{
		s += 1 / i;
	}
	cout << "S = " << s;
}