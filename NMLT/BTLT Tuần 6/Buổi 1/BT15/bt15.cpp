#include<iostream>
using namespace std;
void main()
{
	int a, b, u,i=1;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	while (a<=0)
	{
		cout << "Nhap lai so a: ";
		cin >> a;
	}
	while (b<=0)
	{
		cout << "Nhap lai so b: ";
		cin >> b;
	}
	while (i<=a&&i<=b) 
	{
		if (a%i==0&&b%i==0)
		{
			u = i;
		}
		i++;
	}
	cout << "uoc chung lon nhat la: "<<u;
}