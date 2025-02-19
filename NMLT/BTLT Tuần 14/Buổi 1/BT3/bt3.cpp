#include <iostream>
using namespace std;
struct PHANSO
{
	int tu, mau;
};
void nhapps(PHANSO& ps)
{
	cout << "Nhap phan tu phan so: ";
	cin >> ps.tu;
	do
	{
		cout << "Nhap vao mau phan so: ";
		cin >> ps.mau;
	} while (ps.mau <= 0);
}
int sosanhps(PHANSO ps1, PHANSO ps2)
{
	if (ps1.tu*ps2.mau==ps1.mau*ps2.tu)
	{
		return 0;
	}
	else if (ps1.tu * ps2.mau < ps1.mau * ps2.tu)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}
void xuatPS(PHANSO pso1)
{
	if (pso1.mau == 1)
		cout << pso1.tu << endl;
	else
		cout << pso1.tu << "/" << pso1.mau<<endl;
}
void main()
{
	PHANSO p1, p2;
	nhapps(p1);
	nhapps(p2);
	xuatPS(p1);
	xuatPS(p2);
	cout<<sosanhps(p1, p2);
}