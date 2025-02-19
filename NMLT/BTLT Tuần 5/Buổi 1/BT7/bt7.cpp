#include<iostream>
using namespace std;
void main()
{
	int thang, nam;
	cin >> thang >> nam;
	if (nam > 0)
	{
		switch (thang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: cout <<"thang " << thang << " co 31 ngay";break;
		case 4:
		case 6:
		case 9:
		case 11: cout <<"thang " << thang << " co 30 ngay";break;
		case 2:
			if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
			{
				cout <<"thang " << thang << " co 29 ngay";
			}
			else
			{
				cout <<"thang " << thang << " co 28 ngay";
			}
			break;
		default:cout << "Du lieu khong hop le";
			break;
		}
	}
	else
	{
		cout << "Du lieu khong hop le";
	}
}