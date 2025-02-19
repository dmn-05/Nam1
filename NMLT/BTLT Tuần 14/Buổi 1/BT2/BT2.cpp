#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct PHANSO
{
	int tu, mau;
};
void xuatPS(PHANSO pso1)
{
	if (pso1.mau == 1)
		cout << pso1.tu << endl;
	else
		cout << pso1.tu << "/" << pso1.mau << endl;
}
PHANSO nhapps(PHANSO& pso1)
{
	cout << "Nhap phan tu: ";
	cin >> pso1.tu;
	do
	{
		cout << "Nhap phan mau: ";
		cin >> pso1.mau;
	} while (pso1.mau == 0);
	return pso1;
}
PHANSO rutgon(PHANSO pso)
{
	int min, UCLN = 1;
	if (pso.tu > pso.mau)
	{
		min = pso.mau;
	}
	else
	{
		min = pso.tu;
	}
	for (int i = min; i > 0; i--)
	{
		if (pso.tu % i == 0 && pso.mau % i == 0)
		{
			UCLN = i;
			break;
		}
	}
	pso.tu /= UCLN;
	pso.mau /= UCLN;
	return pso;
}
int tong(PHANSO ps1, PHANSO ps2)
{
	int tong;
	tong = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
	return tong;
}
int hieu(PHANSO ps1, PHANSO ps2)
{
	int hieu;
	hieu = ps1.tu * ps2.mau - ps1.mau * ps2.tu;
	return hieu;
}
int tich(PHANSO ps1, PHANSO ps2)
{
	int tich;
	tich = ps1.tu * ps2.tu;
	return tich;
}
int thuong(PHANSO ps1, PHANSO ps2)
{
	int thuong;
	thuong = ps1.tu * ps2.mau;
	return thuong;
}
void main()
{
	PHANSO ps1, ps2, tong1, hieu1, tich1, thuong1;
	nhapps(ps1);
	nhapps(ps2);
	tong1.tu = tong(ps1, ps2);
	tong1.mau = ps1.mau * ps2.mau;
	rutgon(tong1);
	xuatPS(rutgon(tong1));
	hieu1.tu = hieu(ps1, ps2);
	hieu1.mau = ps1.mau * ps2.mau;
	rutgon(hieu1);
	xuatPS(rutgon(hieu1));
	tich1.tu = tich(ps1, ps2);
	tich1.mau = ps1.mau * ps2.mau;
	rutgon(tich1);
	xuatPS(rutgon(tich1));
	thuong1.tu = thuong(ps1, ps2);
	thuong1.mau = ps1.mau * ps2.tu;
	rutgon(thuong1);
	xuatPS(rutgon(thuong1));
}