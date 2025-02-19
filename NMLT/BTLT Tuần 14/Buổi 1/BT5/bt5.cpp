#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct DONTHUC
{
	int coso, mu;
};
void xuatso(DONTHUC so)
{
		cout << so.coso << "x^" << so.mu<<endl;
}
DONTHUC nhapso(DONTHUC& so)
{
	cout << "Nhap co so: ";
	cin >> so.coso;
	cout << "Nhap phan mu: ";
	cin >> so.mu;
	return so;
}
DONTHUC daoham(DONTHUC so)
{
	so.coso *= so.mu;
	so.mu = so.mu - 1;
	return so;
}
void main()
{
	DONTHUC so1;
	nhapso(so1);
	xuatso(so1);
	xuatso(daoham(so1));
	
}