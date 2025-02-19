#include<iostream>
using namespace std;
void main()
{
	int thang, nam;
	cin >> thang >> nam; 
	if (0<thang&&thang<13)
	{
		if (0<nam)
		{
			if (thang == 2)
			{
				if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
				{
					cout << thang << " co 29 ngay";
				}
				else
				{
					cout << thang << " co 28 ngay";
				}
			}
			else if (thang==4||thang==6||thang==9||thang==11) 
			{
				cout << thang << " co 30 ngay";
			}
			else 
			{
				cout << thang << " co 31 ngay";
			}
		}
		else
		{
			cout << "Nam khong hop le";
		}
	}
	else
	{
		cout << "Thang khong hop le";
	}
}