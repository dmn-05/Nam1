#include<iostream>
using namespace std;
void main()
{
	int so, soam = 0, soduong = 0;
	while (true)
	{
		cout << "Nhap vao so nguyen Hoac Nhap 0 de ket thuc: ";
		cin >> so;
		if (so==0)
		{
			break;
		}
		if (so > 0)
		{
			soduong++;
		}
		else
		{
			soam++;
		}
	}
	cout << "co " << soam << " so am\n";
	cout << "co " << soduong << " so duong\n";
}