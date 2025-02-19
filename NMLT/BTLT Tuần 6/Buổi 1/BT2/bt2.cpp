#include<iostream>
using namespace	std;
void main()
{
	int m, c, tt;
	cout << "Nhap so dien cu\n";
	cin >> c;
	cout << "nhap so dien moi\n";
	cin >> m;
	while (c<0||m<c)
	{
		cout << "Nhap lai so dien cu\n";
		cin >> c;
		cout << "Nhap lai so dien moi\n";
		cin>> m;
	}
	tt = m - c;
	cout << "dien tieu thu la: " << tt;
}