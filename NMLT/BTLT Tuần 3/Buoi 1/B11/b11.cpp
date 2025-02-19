#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	float a, b, c, cv, dt, p, r, R;
	cout << "Hay nhap a\n";
	cin >> a;
	cout << "Hay nhap b\n";
	cin >> b;
	cout << "Hay nhap c\n";
	cin >> c;
	p = (a + b + c) / 2;
	cv = a + b + c;
	dt = sqrt(p * (p - a) * (p - b) * (p - c));
	r = dt / p;
	R = (a * b * c) / (4 * dt);
	cout << "chu vi: " << cv << endl;
	cout << "dien tich: " << dt << endl;
	cout << "ban kinh: " << r << endl;
	cout << "duong kinh:" << R;
}
