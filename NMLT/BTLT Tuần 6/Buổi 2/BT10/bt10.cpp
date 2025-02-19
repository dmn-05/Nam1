#include<iostream>
using namespace std;
void main()
{
	int a, n,tong=0;
	cout << "Nhap vao so nguyen:\n";
	cin >> n;
	while (n<0)
	{
		cout << "Nhap vao so nguyen:\n";
		cin >> n;
	}
	while (n>0)
	{
		a = n % 10;
		n /= 10;
		tong = tong + a;
	}
	cout << "Tong cac so la: " << tong;
}