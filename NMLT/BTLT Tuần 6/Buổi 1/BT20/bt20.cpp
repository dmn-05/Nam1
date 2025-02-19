#include<iostream>
using namespace std;
void main()
{
	int ngay, thang, nam, s = 0, i;
	char x;
	while (true)
	{
		cout << "Hay nhap ngay: ";
		cin >> ngay;
		cout << "Hay nhap thang: ";
		cin >> thang;
		cout << "Hay nhap nam: ";
		cin >> nam;
		if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
		{
			cout << "Nam " << nam << " la nam nhuan\n";
		}
		else
		{
			cout << "Nam " << nam << " khong phai nam nhuan\n";
		}
		switch (thang)
		{
		case 2:
			if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
			{
				cout << "thang " << thang << " co 29 ngay\n";
			}
			else
			{
				cout << "thang " << thang << " co 28 ngay\n";
			}
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "thang " << thang << " co 31 ngay\n";
			break;
		default:
			cout << "thang " << thang << " co 30 ngay\n";
			break;
		}
		s = ngay;
		for (i=1;i < thang;i++)
		{
			switch (i)
			{
			case 2:
				if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
				{
					s += 29;
				}
				else
				{
					s += 28;
				}
				break;
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				s =s + 31;
				break;
			default:
				s =s+ 30;
				break;
			
			}
		}
		cout << ngay << "/" << thang << "/" << nam << " la ngay thu " << s << " trong nam\n";
		cout << "Ban muon tiep tuc khong(y/n)? ";
		cin >> x;
		if (x=='n')
		{
			break;
		}
	}
}