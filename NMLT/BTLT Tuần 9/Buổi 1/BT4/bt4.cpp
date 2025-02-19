#include<iostream>
using namespace std;
void vantoc(double Km, double Hour, double& KmPerHour)
{
	KmPerHour = Km / Hour;
}
void main()
{
	double a, b;
	double c;
	cout << "Nhap so Km di du lich:\n";
	cin >> a;
	cout << "Nhap so gio da di du lich:\n";
	cin >> b;
	vantoc(a, b, c);
	cout << "Toc do cua ban la " << c << " Km tren gio\n";
}