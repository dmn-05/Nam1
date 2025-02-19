#include<iostream>
using namespace std;
void main()
{
	int a;
	cout << "hay nhap thang:\n";
	cin >> a;
	if (a>=3&&a<=5)
	{
		cout << "Mua Xuan";
	}
	else
	{
		if (a>=6&&a<=8)
		{
			cout << "Mua Ha";
		}
		else
		{
			if (a>=9&&a<=11)
			{
				cout << "Mua Thu";
			}
			else
			{
				cout << "Mua Dong";
			}
		}
	}
}