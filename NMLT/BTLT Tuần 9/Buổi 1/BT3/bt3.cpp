#include<iostream>
using namespace std;
void hoanvi(int n, int m)
{
	int a;
	a = n;
	n = m;
	m = a;
	cout << "hoan vi so thu nhat co gia tri la: " << n << endl;
	cout << "hoan vi so thu hai co gia tri la: " << m << endl;
}
void main()
{
	int b, c;
	cout << "Nhap gia tri so thu 1:\n";
	cin >> b;
	cout << "Nhap gai tri so thu 2\n";
	cin >> c;
	hoanvi(b, c);
}