#include<iostream>
using namespace std;
void main()
{
	int n, maxam=INT_MIN,count=1;
	while (count>0)
	{
		cout << "Nhap N thu "<<count<<":";
		cin >> n;
		if (n==0)
		{
			break;
		}
		if (n>maxam&&n<0)
		{
			maxam = n;
		}
		count++;
	}
	if (maxam==INT_MIN)
	{
		cout << "Khong co so am lon nhat";
	}
	else
	{
		cout << "So am lon nhat la: " << maxam;
	}
}