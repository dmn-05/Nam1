#include<iostream>
using namespace std;
void main()
{
	int tuoi, ns, giap, cn;
	cin >> ns;
	tuoi = 2023 - ns;
	if (ns >= 1900 && ns <= 2021)
	{
		char cn;
		cout << "a. xem tuoi\n";
		cout << "b. xem do tuoi\n";
		cout << "c. xem con giap\n";
		cin >> cn;
		switch (cn)
		{
		case 'a':
			cout << tuoi << " tuoi\n";
			break;
		case 'b':
			if (tuoi > 0 && tuoi < 18)
			{
				cout << "Tre em\n";
			}
			else if (tuoi < 41)
			{
				cout << "Thanh nien\n";
			}
			else if (tuoi < 61)
			{
				cout << "Trung nien\n";
			}
			else
			{
				cout << "Nghi huu\n";
			}
			break;
		case 'c':
			giap = ns % 12;
			switch (giap)
			{
			case 0: cout << "tuoi than\n"; break;
			case 1: cout << "tuoi dau\n"; break;
			case 2: cout << "tuoi tuat\n"; break;
			case 3: cout << "tuoi hoi\n"; break;
			case 4: cout << "tuoi ti\n"; break;
			case 5: cout << "tuoi suu\n"; break;
			case 6: cout << "tuoi dan\n"; break;
			case 7: cout << "tuoi meo\n"; break;
			case 8: cout << "tuoi thin\n"; break;
			case 9: cout << "tuoi ty\n"; break;
			case 10: cout << "tuoi ngo\n"; break;
			case 11: cout << "tuoi mui\n"; break;
			}break;
		default: cout << "chua co chuc nang";
		break;
		}
	}
	else
	{
		cout << "Du lieu khong hop le";
	}
}