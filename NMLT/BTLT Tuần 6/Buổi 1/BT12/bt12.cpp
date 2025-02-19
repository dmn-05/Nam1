#include<iostream>
using namespace std;
void main()
{
	int n, soam=0;
	while (true)
	{
		cout << "Nhap N: ";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		if (n < 0)
		{
			soam++;
		}
	}
	cout << "So am la: " << soam;
}