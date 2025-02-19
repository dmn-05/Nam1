#include<iostream>
#include<cmath>
using namespace std;
void bangcuuchuong(int so, int& kq)
{
	for (int i = 1; i < 11; i++)
	{
		kq = so * i;
		cout << so << "*" << i << "=" << kq << endl;
	}
}
void main()
{
	int a, b;
	cout << "Nhap mot so tu 2 den n: ";
	cin >> a;
	bangcuuchuong(a, b );
}