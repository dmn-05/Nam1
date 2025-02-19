#include<iostream>
using namespace std;
void main()
{
	float bankinh, chuvi, dientich;
	cout << "input:\n";
	cin >> bankinh;
	chuvi = (bankinh * 2) * 3.14;
	dientich = (bankinh * bankinh) * 3.14;
	cout << "output: " << chuvi << "," << dientich;
}