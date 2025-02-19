#include<iostream>
using namespace std;
void chuyendiem(double n, double sol, double& tb1)
{
	if (tb1 <= 100 && tb1 > 89)
	{
		cout << "diem tuong ung la A";
	}
	else if (tb1 > 79)
	{
		cout << "diem tuong ung la B";
	}
	else if (tb1 > 69)
	{
		cout << "diem tuong ung la C";
	}
	else if (tb1 > 59)
	{
		cout << "diem tuong ung la D";
	}
	else
	{
		cout << "diem tuong ung la F";
	}
}
void main()
{
	double a,sl;
	double tong = 0;
	double tb;
	cout << "Nhap So luong:\n";
	cin >> sl;
	for (int i = 1; i <= sl; i++)
	{
		cout << "Nhap diem vao\n";
		cin >> a;
		tong = tong + a;
	}
	tb = tong / sl;
	chuyendiem(a, sl, tb);
}