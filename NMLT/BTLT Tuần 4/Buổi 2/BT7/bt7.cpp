#include<iostream>
using namespace std;
void main()
{
	int nam;
	cin >> nam;
	if (nam%4==0&&nam%100!=0||nam%400==0)
	{
		cout << "nam nhuan";
	}
	else
	{
		cout << "nam khong nhuan";
	}
}

