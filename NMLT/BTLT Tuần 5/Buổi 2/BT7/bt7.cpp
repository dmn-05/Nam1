#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	int ngay, thang, nam;
	int	ngaythang=0;
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
					cout << "Du lieu hop le\n";
					ngaythang = 29;
				}
				else
				{
					cout << "ngay khong hop le\n";

				}
			}
			else
			{
				if (ngay > 0 && ngay <= 28)
				{
					cout << "Du lieu hop le\n";
					ngaythang = 28;
				}
				else
				{
					cout << "ngay khong hop le\n";
				}
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
				cout << "Du lieu hop le\n";
				ngaythang = 31;
			}
			else
			{
				cout << "ngay khong hop le\n";
			}
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (ngay > 0 && ngay <= 30)
			{
				cout << "Du lieu hop le\n";
				ngaythang = 30;
			}
			else
			{
				cout << "ngay khong hop le\n";
			}
		break;
		default:cout << "thang khong hop le\n";
		break;	
		}	
	}
	else
	{
		cout << "nam khong hop le";
	}
	if (ngay <= ngaythang && thang > 0 && thang < 13 && nam>0)
	{
		int a = ngay / 10;
		int b = ngay % 10;
		if (a == 0)
		{
			cout << ngay << "th";
		}
		else
		{
			switch (b)
			{
			case 1: cout << ngay << "st ";break;
			case 2: cout << ngay << "nd ";break;
			case 3: cout << ngay << "rd ";break;
			default: cout << ngay << "th ";break;
			}
		}
		switch (thang)
		{
		case 1:cout << "January";break;
		case 2:cout << "Febuary ";break;
		case 3:cout << "March ";break;
		case 4:cout << "April ";break;
		case 5:cout << "May ";break;
		case 6:cout << "June ";break;
		case 7:cout << "July ";break;
		case 8:cout << "August ";break;
		case 9:cout << "September ";break;
		case 10:cout << "October ";break;
		case 11:cout << "November ";break;
		case 12:cout << "December ";break;
		}
		cout << nam;
	}
	else
	{
		cout << " ";
	}
}