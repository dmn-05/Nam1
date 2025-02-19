#include<iostream>
using namespace std;
void main()
{
	float dai, rong, chuvi, dientich;
	cout << "nhap chieu dai:\n";
	cin >> dai;
	cout << "nhap chieu rong:\n";
	cin >> rong;
	chuvi = (dai + rong) * 2;
	dientich = dai * rong;
	cout << "chu vi la: " << chuvi << endl;
	cout << "dien tich la: " << dientich;
}