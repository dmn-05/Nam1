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
		cout << pso1.tu;
	else
		cout << pso1.tu << "/" << pso1.mau;
}
PHANSO nhapps(PHANSO& pso1)
{
	cout << "Nhap phan tu: ";
	cin >>pso1.tu;
	do
	{
		cout << "Nhap phan mau: ";
		cin >> pso1.mau;
	} while (pso1.mau==0);
	return pso1;
}
PHANSO rutgon(PHANSO pso1)
{
	int min, UCLN=1;
	if (pso1.tu>pso1.mau)
	{
		min = pso1.mau;
	}
	else
	{
		min = pso1.tu;
	}
	for (int i = min; i > 0 ; i--)
	{
		if (pso1.tu%i==0&& pso1.mau%i==0)
		{
			UCLN = i;
			break;
		}
	}
	pso1.tu /= UCLN;
	pso1.mau /= UCLN;
	return pso1;
}
void main()
{
	PHANSO ps1, ps2;
	nhapps(ps1);
	ps1=rutgon(ps1);
	xuatPS(ps1);
}