#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	int km,i=0;
	float xang,vt,t=0;
	while (true)
	{
		cout << "Nhap vao so lit xang da dung(-1 de ket thuc): ";
		cin >> xang;
		if (xang==-1)
		{
			break;
		}
		cout << "Hay nhap vao so km da chay: ";
		cin >> km;
		vt = km / xang;
		cout << "So km/lit cho binh xang nay la: " << vt<<endl;
		t = t + vt;
		i++;
	}
	cout << "Trung binh la: " << t / i;
}