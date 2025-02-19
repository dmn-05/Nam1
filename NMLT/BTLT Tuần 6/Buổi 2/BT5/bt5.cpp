#include<iostream>
using namespace std;
void main()
{
	int a;
	while (true)
	{
		cout << "hay nhap thang:\n";
		cin >> a;
		while (!(a > 0 && a < 13))
		{
			cout << "hay nhap thang:\n";
			cin >> a;
		}
		if (a >= 3 && a <= 5)
		{
			cout << "Mua Xuan\n";
		}
		else
		{
			if (a >= 6 && a <= 8)
			{
				cout << "Mua Ha\n";
			}
			else
			{
				if (a >= 9 && a <= 11)
				{
					cout << "Mua Thu\n";
				}
				else
				{
					cout << "Mua Dong\n";
				}
			}
		}
	}
}