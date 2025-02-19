#include<iostream>
using namespace std;
void TinhTong()
{
	int a, b, sum;
	cout << "Nhap so thu 1:\n";
	cin >> a;
	cout << "Nhap so thu 2:\n";
	cin >> b;
	sum = a + b;
	cout << a << "+" << b << "=" << sum;
}
void main()
{
	TinhTong();//goi ham tinhtong
}