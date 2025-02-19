/*int nhapsoduong(int& n)
{
	do
	{
		cout << "Nhap vao so nguyen duong N:\n";
		cin >> n;
	} while (n <= 0);
	return n;
}
int sohoanhao(int& sohh)
{
	int tong;
	tong = 0;
	for (int u = 1; u < sohh;u++)
	{
		if (sohh % u == 0)
		{
			tong += u;
		}
	}
	if (tong == sohh)
	{
		return true;
	}
	else
	{
		return false;
	}
}
*/
#include<iostream>
#include<cmath>
using namespace std;
double nhapbacanh(int& x, int& y, int& z)
{
	cout << "Nhap canh 1: ";
	cin >> x;
	cout << "Nhap canh 2: ";
	cin >> y;
	cout << "Nhap canh 3: ";
	cin >> z;
	return x;
	return y;
	return z;
}
bool kiemtra(int a1, int b1, int c1)
{
	if (a1 + b1 > c1 && a1 + c1 > b1 && b1 + c1 > a1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
double tinhdientich(double a2, double b2, double c2)
{
	double s;
	double p = 0;
	p = (a2 + b2 + c2) / 2;
	s = sqrt(p * (p - a2) * (p - b2) * (p - c2));
	return s;
}
double tinhchieucaoA(double a3, double b3, double c3)
{
	double ha;
	ha = (2 * tinhdientich(a3, b3, c3)) / a3;
	return ha;
}
double tinhchieucaoB(double a3, double b3, double c3)
{
	double ha, hb, hc;
	hb = (2 * tinhdientich(a3, b3, c3)) / b3;
	return hb;
}
double tinhchieucaoC(double a3, double b3, double c3)
{
	double ha, hb, hc;
	hc = (2 * tinhdientich(a3, b3, c3)) / c3;
	return hc;
}
void main()
{
	int a, b, c;
	nhapbacanh(a, b, c);
	cout << "-----------------\n";
	if (kiemtra(a, b, c))
	{
		cout << "Dien tich la: " << tinhdientich(a, b, c) << endl;
		cout << "chieu cao ha la: " << tinhchieucaoA(a,b,c) << endl;
		cout << "chieu cao hb la: " << tinhchieucaoB(a, b, c) << endl;
		cout << "chieu cao hc la: " << tinhchieucaoC(a, b, c) << endl;
	}
	else
	{
		cout << "khong phai ba canh tam giac\n";
	}
}

/*
		
		
		
		
		
*/