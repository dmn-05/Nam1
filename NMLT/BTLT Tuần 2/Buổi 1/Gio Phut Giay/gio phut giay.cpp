#include<iostream>
using namespace std;
void main()
{
	int giay, phut, gio;
	cout << "hay nhap so giay:\n";
	cin >> giay;
	gio = giay / 3600;
	phut = giay % 3600 / 60;
	giay = giay % 3600 % 60;
	cout << gio << ":" << phut << ":" << giay;
}