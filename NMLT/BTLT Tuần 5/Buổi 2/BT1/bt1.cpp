#include<iostream>
using namespace std;
void main()
{
	char num;
	cin >> num;
	switch (num)
	{
	case 82:
	case 114: cout << "RED"; break;
	case 103:
	case 71:cout << "GREEN"; break;
	case 66:
	case 98:cout << "BLUE"; break;
	default:cout << "BLACK";
		break;
	}
}