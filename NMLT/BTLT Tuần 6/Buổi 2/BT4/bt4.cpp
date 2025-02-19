#include<iostream>
using namespace std;
void main()
{
	int tu, mau, i;
	while (true)
	{
		cout << "Hay nhap tu so: ";
		cin >>tu;
		cout << "Hay nhap mau so (mau so 0 de ket thuc): ";
		cin >> mau;
		if (mau==0)
		{
			break;
		}
		i = 1;
		while (i<=tu&&i<=mau)
		{
			if (tu%i==0&&mau%i==0)
			{
				tu = tu / i;
				mau = mau / i;
			}
			i++;
		}
		cout << "Phan so rut gon la: " << tu << "/" << mau<<endl;
	}
}