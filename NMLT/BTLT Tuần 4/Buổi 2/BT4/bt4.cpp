#include<iostream>
using namespace std;
void main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a<b&&a<c&&a<d&&a<0)
	{
		cout << "so co gia tri am lon nhat la a= " << a;
	}
	else if (b<a&&b<c&&b<d&&b<0)
	{
		cout << "so co gia tri am lon nhat la b= " << b;
	}
	else if (c<a&&c<b&&c<d&&c<0)
	{
		cout << "so co gia tri am lon nhat la c= " << c;
	}
	else if (d<a&&d<b&&d<c&&d<0)
	{
		cout << "so co gia tri am lon nhat la d= " << d;
	}
	else
	{
		cout << "khong co gia tri am lon nhat";
	}
}