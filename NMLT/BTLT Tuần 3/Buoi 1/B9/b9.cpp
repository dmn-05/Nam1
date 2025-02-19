#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	float a, b, c, kq;
	cout << "Hay nhap a:\n";
	cin >> a;
	cout << "Hay nhap b:\n";
	cin >> b;
	cout << "Hay nhap c:\n";
	cin >> c;
	kq = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
	cout << "ket qua la: " << kq;
}