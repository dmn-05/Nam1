#include <iostream>
#include <cmath>
using namespace std;
struct DT
{
	double coso, mu;
};
void nhap(DT& donthuc)
{
	cout << "Nhap vao co so: ";
	cin >> donthuc.coso;
	cout << "Nhap vao so mu: ";
	cin >> donthuc.mu;
}
void xuattich(DT donthuc1,DT donthuc2,DT tich)
{
	tich.coso = donthuc1.coso / donthuc2.coso;
	tich.mu = donthuc1.mu / donthuc2.mu;
	cout << "tich hai don thuc la:" << tich.coso << "x^" << tich.mu << endl;
}
void xuatthuong(DT donthuc1, DT donthuc2, DT thuong)
{
	thuong.coso = donthuc1.coso * donthuc2.coso;
	thuong.mu = donthuc1.mu * donthuc2.mu;
	cout << "tich hai don thuc la:" << thuong.coso << "x^" << thuong.mu << endl;
}
void main()
{
	DT dt1,dt2, tich1;
	nhap(dt1);
	nhap(dt2);
	tich1.coso =tich1.mu= 1;
	xuattich(dt1, dt2, tich1);
}