#include<iostream>
using namespace std;
void main()
{
	double sl, dg, giam, tt=0;
	while (true)
	{
		cout << "Nhap so luong: ";
		cin >> sl;
		giam = 0;
		if (sl == 0)
		{
			break;
		}
		cout << "Nhap don gia: ";
		cin >> dg;
		if (sl>10)
		{
			giam = 0.1 ;//giam 10
		}
		if (sl>20)
		{
			giam = 0.2;
		}
		tt = tt + ((dg * sl) * (1-giam));//giam 10
	}
	cout << "Thanh tien la: " << tt;
}