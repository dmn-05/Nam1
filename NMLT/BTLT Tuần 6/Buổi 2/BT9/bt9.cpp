#include<iostream>
using namespace std;
void main()
{
	float  tu, mau, rg;
	while (true)
	{
		cout << "Hay nhap tu so(tu so 0 de ket thuc): ";
		cin >> tu;
		if (tu == 0)
		{
			break;
		}
		cout << "Hay nhap mau so (mau so 0 de ket thuc): ";
		cin >> mau;
		if (mau == 0)
		{
			break;
		}
		rg = tu / mau;
		cout << "Phan so rut gon la: " << rg  << endl;
	}
}