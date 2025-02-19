#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	float x1, y1, x2, y2, x3, y3, ab, ac, bc;
	cout << "Nhap Toa Do X1:\n";
	cin >> x1;
	cout << "Nhap Toa Do Y1:\n";
	cin >> y1;
	cout << "Nhap Toa Do X2:\n";
	cin >> x2;
	cout << "Nhap Toa Do Y2:\n";
	cin >> y2;
	cout << "Nhap Toa Do X3:\n";
	cin >> x3;
	cout << "Nhap Toa Do Y3:\n";
	cin >> y3;
	ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	ac = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	cout << "Do dai canh ab: " << ab << endl;
	cout << "Do dai canh bc: " << bc << endl;
	cout << "Do dai canh ac: " << ac << endl;
}