#include<iostream>
using namespace std;
void main()
{
	int sdc, sdm,sdt;
	cin >> sdc >> sdm;
	float dg1=1750, dg2=2225, dg3=2750, dg4=3250, tien;
	if (sdc>0&&sdc<sdm)
	{
		sdt = sdm - sdc;
		if (sdt<50)
		{
			tien =sdt * dg1;
		}
		else if (sdt<100)
		{
			tien =49*dg1+(sdt-49)*dg2;
		}
		else if (sdt<200)
		{
			tien = 49 * dg1 + 50 * dg2 + (sdt - 99) * dg3;
		}
		else
		{
			tien = 49*dg1+50*dg2+100*dg3+(sdt-199)*dg4;
		}
		cout << "tien dien la: " << tien;
	}
	else
	{
		cout << "du lieu khong hop le";
	}
}