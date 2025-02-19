#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	double x1, x2, y1, y2, kc;
	cout << "Nhap toa do X1:\n";
	cin >> x1;
	cout << "Nhap toa do Y1:\n";
	cin >> y1;
	cout << "Nhap toa do X2:\n";
	cin >> x2;
	cout << "Nhap toa do Y2:\n";
	cin >> y2;
	kc = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "Khoang cach hai diem la: " << kc;
}