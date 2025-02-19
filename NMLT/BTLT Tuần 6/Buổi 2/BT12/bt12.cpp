#include<iostream>
using namespace std;
void main()
{
	int thang;
	while (true)
	{
		cout << "Nhap vao thang:\n";
		cin >> thang;
		while (!(-1 < thang && thang < 13))
		{
			cout << "Nhap vao thang:\n";
			cin >> thang;
		}
		if (thang == 0)
		{
			break;
		}
		if (thang == 2)
		{
			cout << "thang " << thang << " co 28 ngay hoac 29 ngay\n";
		}
		else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
		{
			cout << "thang " << thang << " co 30 ngay\n";
		}
		else if (thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)
		{
			cout <<"thang " << thang << " co 31 ngay\n";
		}
	}
}