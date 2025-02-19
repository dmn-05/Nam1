#include<iostream>
using namespace std;
void main()
{
	int n, k = 0;
	while (true)
	{
		cout << "Nhap so N:\n";
		cin >> n;
		if (n==-1)
		{
			break;
		}
		do
		{
			k = k * 10 + n % 10;
			n /= 10;
		} while (n != 0);
		cout << "Gia tri dao nguoc la: " << k << endl;
	}
}