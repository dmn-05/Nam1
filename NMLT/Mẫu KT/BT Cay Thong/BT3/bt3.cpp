#include<iostream>
using namespace std;
void main()
{
	int n, nam, thang, c = 0;
	cout << "thu";
	cin >> n;
	cout << "thang";
	cin >> thang;
	cout << "nam";
	cin >> nam;


	for (int i = 1; i < n; i++)
	{
		cout << "\t";
		c++;
	}
	if (thang == 3 || thang == 1 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
		for (int j = 1; j <= 31; j++)
		{
			c++;
			if (c % 7 == 0)
			{
				cout << j << endl;
			}
			else
			{
				cout << j << "\t";
			}

		}

	else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)

		for (int j = 1; j <= 30; j++)
		{
			c++;
			if (c % 7 == 0)
			{
				cout << j << endl;
			}
			else
			{
				cout << j << "\t";
			}
		}
	else if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))

		for (int j = 1; j <= 29; j++)
		{
			c++;
			if (c % 7 == 0)
			{
				cout << j << endl;
			}
			else
			{
				cout << j << "\t";
			}
		}
	else
		for (int j = 1; j <= 28; j++)
		{
			c++;
			if (c % 7 == 0)
			{
				cout << j << endl;
			}
			else
			{
				cout << j << "\t";
			}
		}
}