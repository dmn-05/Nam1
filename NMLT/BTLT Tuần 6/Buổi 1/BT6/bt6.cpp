#include<iostream>
using namespace std;
void main()
{
	int n;
	double i = 0, s = 0;
	cout << "Nhap N\n";
	cin >> n;
	while (i<=n)
	{
		s = s + ((2 * i + 1) / (2 * i + 2));
		i++;
	}
	cout << "Gia tri bieu thuc la: " << s;
}