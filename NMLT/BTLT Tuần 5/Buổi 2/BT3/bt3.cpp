#include<iostream>
using namespace std;
void main()
{
	int a, b;
	double tong, hieu, tich, thuong;
	char num;
	cin >> num;
	switch (num)
	{
	case 43:
		cin >> a >> b;
		tong = a + b;
		cout << "tong la: " << tong;
		break;
	case 45:
		cin >> a >> b;
		hieu = a - b;
		cout << "hieu la: " << hieu;
		break;
	case 42:
		cin >> a >> b;
		tich = a * b;
		cout << "tich la: "<<tich;
		break;
	case 47:
		cin >> a >> b;
		if (b!=0)
		{
			thuong = a / b;
			cout << "thuong la: "<<thuong;
		}
		else
		{
			cout << "khong thuc hien duoc phep chia";
		}
		break;
	default:cout << "khong co chuc nang nay";
		break;
	}
}