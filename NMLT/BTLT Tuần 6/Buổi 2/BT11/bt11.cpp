#include<iostream>
using namespace std;
void main()
{
	int n, t = 0;
	while (true)
	{
		cout << "hay nhap so nguyen duong (Nhap 0 de kt):\n";
		cin >> n;
		if (n==0)
		{
			break;
		}
		if (n>0)
		{
			t = t + n;
		}
	}
	cout << "Tong cac so nguyen duong la: " << t << endl;
}