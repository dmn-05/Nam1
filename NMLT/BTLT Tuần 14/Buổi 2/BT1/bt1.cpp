#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
struct DONTHUC
{
	float heso;
	int somu;
};
void xuatso(DONTHUC so)
{
	cout << so.heso << "x^" << so.somu;
}
void nhap(DONTHUC& dt)
{
	cout << "\n Nhap Vao don Thuc gom :";
	cout << "\nNhap vao he so: ";
	cin >>dt.heso;
	cout << "\nNhap so mu: ";
	cin >> dt.somu;
}
DONTHUC daoham(DONTHUC so)
{
	so.heso *= so.somu;
	so.somu = so.somu - 1;
	return so;
}
void main()
{
	DONTHUC so1,so2;
	nhap(so1);
	nhap(so2);
	xuatso(daoham(so1));
	cout << " + ";
	xuatso(daoham(so2));
}