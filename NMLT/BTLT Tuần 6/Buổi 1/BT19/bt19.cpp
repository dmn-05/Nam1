#include<iostream>
using namespace std;
void main()
{
	int n, minduong = INT_MAX, count = 1;
	while (count > 0)
	{
		cout << "Nhap N thu " << count << ":";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		if (n<minduong && n > 0)
		{
			minduong = n;
		}
		count++;
	}
	if (minduong == INT_MAX)
	{
		cout << "Khong co so duong be nhat";
	}
	else
	{
		cout << "So duong be nhat la: " << minduong;
	}
}