#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int n,x, i = 1, s = 0;
	cout << "Nhap N: ";
	cin >> n;
	cout << "Nhap X: ";
	cin >> x;
	while (i<=n)
	{
		s = pow(-1, i-1) / pow(x,i)/i ;
		i++;
	}
	cout << "Gia tri bieu thuc la: " << s;
}