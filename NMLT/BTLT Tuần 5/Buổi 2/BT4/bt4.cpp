#include<iostream>
using namespace std;
void main()
{
	int ngay, thang, nam;
	cin >> ngay >> thang >> nam;
	if (nam>0)
	{
		switch (thang)
		{
		case 2:
			if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
			{
				if (ngay > 0 && ngay <= 29)
				{
					cout << "Du lieu hop le";
				}
				else
				{
					cout << "Du lieu khong hop le";
				}
			}
			else
			{
				if (ngay > 0 && ngay <= 28)
				{
					cout << "Du lieu hop le";
				}
				else
				{
					cout << "Du lieu khong hop le";
				}
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (ngay > 0 && ngay <= 30)
			{
				cout << "Du lieu hop le";
			}
			else
			{
				cout << "Du lieu khong hop le";
			}
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (ngay > 0 && ngay <= 31)
			{
				cout << "Du lieu hop le";
			}
			else
			{
				cout << "Du lieu khong hop le";
			}
			break;
		default:
			cout << "thang khong hop le";
		}
	}
	else
	{
		cout << "nam khong hop le";
	}
}