#include<iostream>
using namespace std;
void nhapdiem(int& a1,int& b1,int& c1,double& dtb)
{
	cout << "Nhap so diem toan:\n";	
	cin >> a1;
	while (a1<0||a1>10)
	{
		cout << "Nhap lai diem toan:\n";
		cin >> a1;
	}
	cout << "Nhap so diem ly:\n";
	cin >> b1;
	while (b1 < 0 || b1 > 10)
	{
		cout << "Nhap lai diem ly:\n";
		cin >> b1;
	}
	cout << "Nhap so diem hoa:\n";
	cin >> c1;
	while (c1 < 0||c1 > 10)
	{
		cout << "Nhap lai diem hoa:\n";
		cin >> c1;
	}
}
void tinhtbc(int a1, int b1, int c1, double &dtb)
{
	dtb = (a1 + b1 + c1) / 3.0;
	cout << "diem trung binh la: " << dtb;
}
void main()
{
	int a, b, c;
	double tb;
	nhapdiem( a, b, c,tb);
	tinhtbc(a, b, c, tb);
}