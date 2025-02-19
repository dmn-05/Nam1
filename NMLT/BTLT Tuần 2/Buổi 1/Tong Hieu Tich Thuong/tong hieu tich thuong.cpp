#include<iostream>
using namespace std;
void main()
{
	int a, b;
	float tong, hieu, tich, thuong;
	cout << "hay nhap so nguyen a:\n";
	cin >> a;
	cout << "hay nhap so nguyen b:\n";
	cin >> b;
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = a / b;
	cout << "tong la: " << tong << endl;
	cout << "hieu la: " << hieu << endl;
	cout << "tich la: " << tich << endl;
	cout << "thuong la: " << thuong;
}