#include<iostream>
using namespace std;
void main()
{
	float a1,a2,b1,b2,m1,m2 ;
	cout << "hay nhap toa do a1:\n";
	cin >> a1; 
	cout << "hay nhap toa do a2:\n";
	cin >> a2;
	cout << "hay nhap toa do b1:\n";
	cin >> b1;
	cout << "hay nhap toa do b2:\n";
	cin >> b2;
	m1 = (a1 + b1) / 2;
	m2 = (a2 + b2) / 2;
	cout << "toa do trung diem M la: " << m1 << "," << m2;
}