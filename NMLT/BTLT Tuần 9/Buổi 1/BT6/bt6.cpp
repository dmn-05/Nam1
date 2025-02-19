#include<iostream>
using namespace std;
void tinhgiay(int hours, int minutes, int seconds, int& giay)
{
	giay = hours * 3600 + seconds * 60 + minutes;
	cout << "so giay dong ho la: " << giay;
}
void main()
{
	int a, b, c, d, a1, b1, c1;
	cout << "Nhap gio vao: ";
	cin >> a;
	cout << "Nhap phut vao: ";
	cin >> b;
	cout << "Nhap giay vao: ";
	cin >> c;
	cout << "Nhap gio ra: ";
	cin >> a1;
	cout << "Nhap phut ra: ";
	cin >> b1;
	cout << "Nhap giay ra: ";
	cin >> c1;
	a = a1 - a;
	b = b1 - b;
	c = c1 - c;
	if (c < 0)
	{
		c += 60;
		b -= 1;
	}
	if (b<0)
	{
		b += 60;
		a -= 1;
	}
	tinhgiay(a, b, c, d);
}