#include<iostream>
using namespace std;
void main()
{
	char num1, num2;
	cin >> num1 >> num2;
	switch (num1)
	{
	case 66:
	case 98:
		if (num2==66||num2==98)
		{
			cout << "Hoa";
		}
		else if (num2==71||num2==103)
		{
			cout << "nguoi choi 1 thua";
		}
		else if (num2==75||num2==107)
		{
			cout << "nguoi choi 1 thang";
		}
		else
		{
			cout << "nguoi choi 2 chon sai";
		}
		break;
	case 71:
	case 103:
		if (num2 == 66 || num2 == 98)
		{
			cout << "nguoi choi 1 thang";
		}
		else if (num2 == 71 || num2 == 103)
		{
			cout << "Hoa";
		}
		else if (num2 == 75 || num2 == 107)
		{
			cout << "nguoi choi 2 thang";
		}
		else
		{
			cout << "nguoi choi 2 chon sai";
		}
		break;
	case 75:
	case 107:
		if (num2 == 66 || num2 == 98)
		{
			cout << "nguoi choi 2 thang";
		}
		else if (num2 == 71 || num2 == 103)
		{
			cout << "nguoi choi 1 thang";
		}
		else if (num2 == 75 || num2 == 107)
		{
			cout << "Hoa";
		}
		else
		{
			cout << "nguoi choi 2 chon sai";
		}
		break;
	default:cout << "nguoi choi 1 chon sai";
		break;
	}
}